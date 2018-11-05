#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;
#define maxn 110
int n,m;
int res[maxn],G[maxn][maxn],visit[maxn],t;
void dfs(int node){
    visit[node]=-1;// now visiting this node
    for(int i=0;i<n;i++){
        if(G[node][i]){
            if(!visit[i]) dfs(i);
        }
    }
    visit[node]=1;
    res[--t]=node;
}

int main(){
    while(cin>>n>>m&&n) {
        memset(G,0, sizeof(G));
        memset(res,0,maxn);
        for(int k=0,u,v;k<m;k++) {
            cin >> u >> v;
            G[--u][--v] = 1;
        }
        t=n;
        memset(visit,0, sizeof(visit));
        for(int i=0;i<n;i++){
            if(!visit[i]) dfs(i);
        }
        for (int i = 0; i < n; i++) {
            printf("%d", res[i]+1);
            if(i!=n-1) printf(" ");
            else cout<<endl;
        }
    }
    return 0;
}