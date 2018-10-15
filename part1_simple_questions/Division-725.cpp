#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int N;
    bool first=true;
    bool intputf=true;
    while(scanf("%d",&N)==1&&N!=0){
        int res=0;
        if(intputf)
            intputf= false;
        else
            printf("\n");
        for(int i=1234;i<=98765;i++){
            int cnt[20]={0};
            int fghij=i;
            int tf=fghij;
            int abcde=i*N;
            int af=abcde;
            bool find=true;
            int tfcnt=0;
            while(tf){
                cnt[tf%10]++;
                tf/=10;
                tfcnt++;
            }
            if(tfcnt<5){
                cnt[0]+=5-tfcnt;
            }
            int afcnt=0;
            while(af){
                cnt[af%10]++;
                af/=10;
                afcnt++;
            }
            if(afcnt<5)
                cnt[0]+=5-afcnt;
            for(int k=0;k<10;k++){
                if(cnt[k]!=1){
                    find= false;
                    break;
                }
            }
            if(find){
                res++;
                printf("%05d / %05d = %d\n", abcde, fghij, N);
            }
        }
        if(res==0)
            printf("There are no solutions for %d.\n",N);
    }

    return 0;
}