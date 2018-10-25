#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
int c[100];
int cnt=0;
int dfs(int n, int l, int cur){
    if(cnt++==n){
        for(int i=0;i<cur;i++){
            printf("%c",c[i]+'A');
            if(i%4==3&&i<cur-1) printf("%c"," \n"[(i+1)%64==0]);
        }
        if(cur%64!=0) printf("\n");
        printf("%d\n",cur);

        return 0;
    }
    for(int i=0;i<l;i++){
        int ok=1;
        c[cur]=i;
        for(int j=1;j*2<=cur+1;j++){
            int equal=1;
            for(int k=0;k<j;k++){
                if(c[cur-k]!=c[cur-k-j]){
                    equal=0;
                    break;
                }
            }
            if(equal){
                ok=0;
                break;
            }
        }
        if(ok) {
            if(dfs(n, l, cur + 1)==0) return 0;
        }
    }
    return 1;

}
int main(){
    int n,l;
    while(scanf("%d",&n)&&scanf("%d",&l)&&n!=0&&l!=0){
        memset(c,'\0',100);
        dfs(n,l,0);
        cnt=0;

    }
    return 0;

}