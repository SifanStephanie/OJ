#include <stdio.h>

int main() {
    int x=0;
    while(scanf("%d",&x)==1){
        int a=x/100;
        int b=x%100/10;
        int c=x%10;
        if(a*a*a+b*b*b+c*c*c==x)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}