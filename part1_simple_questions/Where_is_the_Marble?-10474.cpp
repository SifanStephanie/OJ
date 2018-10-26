#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
const int maxn=10000;
int main(){
    int n,q;
    int kase=1;
    int num[maxn];
    int guess;
    while(cin>>n>>q&&n!=0){
        cout<<"CASE# "<<kase++<<":"<<endl;
        for(int i=0;i<n;i++) cin>>num[i];
        sort(num,num+n);
        while(q>0){
            cin>>guess;
            
            int p=lower_bound(num,num+n,guess)-num;
            if(num[p]==guess) cout<<guess<<" found at "<<p+1<<endl;
            else cout<<guess<<" not found"<<endl;
            
            /*
            int i=0;
            for(;i<n;i++){
                if(num[i]==guess){
                    cout<<guess<<" found at "<<i+1<<endl;
                    break;
                }
            }
            if(i==n)
                cout<<guess<<" not found"<<endl;
                */
            q--;
        }
        memset(num,0,maxn);
    }
    return 0;
}