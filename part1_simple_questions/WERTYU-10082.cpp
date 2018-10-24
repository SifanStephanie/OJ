#include <stdio.h>
#include <string.h>
using namespace std;
char s[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(){
    int c,i;
    while((c=getchar())!=EOF){
        i=1;
        while(s[i]&&s[i]!=c) i++;
        if(s[i]) putchar(s[i-1]);
        else putchar(c);
    }
    return 0;
}