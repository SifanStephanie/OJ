#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
int casecnt=0;
int vit[18]={0};
int isp[50]={0};
int is_prime(int n){
    if(n<=1) return 0;
    int m=floor(sqrt(n)+0.5);
    for(int i=2;i<=m;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
void dfs(int n,int *A,int cur){
    if(cur==n&&is_prime(A[0]+A[n-1])){
        for(int i=0;i<n;i++){
            if(i!=0) printf(" ");
            printf("%d",A[i]);
        }
        printf("\n");
    }
    else{
        for(int i=2;i<=n;i++){
            if(!vit[i]&&isp[i+A[cur-1]]){
                A[cur]=i;
                vit[i]=1;
                dfs(n,A,cur+1);
                vit[i]=0;
            }

        }
    }
}
int main(){
    int n;
    int A[50]={0};
    for(int i=0;i<50;i++){
        isp[i]=is_prime(i);
    }
    while(scanf("%d",&n)==1&&n>0){
        if(casecnt>0) printf("\n");
        printf("Case %d:\n",++casecnt);
        A[0]=1;
        vit[1]=1;
        dfs(n,A,1);
        memset(vit,0,18);
        memset(A,0,50);
    }
    return 0;
}