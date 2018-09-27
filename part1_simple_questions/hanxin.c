
#include <stdio.h>

#define TEST
int main() {
    #ifdef TEST
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
    #endif
    int a,b,c;
    int kase=1;

    while(scanf("%d",&a)==1){
        scanf("%d",&b);
        scanf("%d",&c);
        int find=0;
        for(int i=3;i<100;i+=3){
            int sum=i+a;
            for(int j=5;j<100;j+=5){
                int sum2=j+b;
                for(int k=7;k<100;k+=7){
                    int sum3=k+c;
                    if(sum==sum2&&sum2==sum3){
                        printf("Case %d: %d\n",kase,sum);
                        find=1;
                    }
                }
            }

        }
        if(!find)
            printf("Case %d: No answer\n",kase);
        kase++;
    }

    return 0;
}