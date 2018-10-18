#include <stdio.h>
#include <string.h>

char guess[100];
char need[100];

int left=0;
int chance=7;
int lose;
int win;

void guess_number(char c){

    int notguess=1;
    for(int i=0;i<strlen(need);i++){
        if(need[i]==c){
            need[i]=' ';
            left--;
            notguess=0;
        }
    }
    if(notguess)
        chance--;
    if(chance==0)
        lose=1;
    if(left==0)
        win=1;
}


int main(){
    int rnd=0;
    while(scanf("%d %s %s",&rnd,need,guess)==3&&rnd!=-1){
        printf("Round %d\n",rnd);
        left=strlen(need);
        chance=7;
        for(int i=0;i<strlen(guess);i++){
            guess_number(guess[i]);
            if(win||lose)
                break;
        }
        if(win){
            printf("You win.\n");
        }
        else if(lose){
            printf("You lose.\n");
        }
        else{
            printf("You chickened out.\n");
        }

        win=0;
        lose=0;
    }
    return 0;

}