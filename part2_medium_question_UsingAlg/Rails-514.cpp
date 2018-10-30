#include <iostream>
#include <string.h>
#include <stack>
#include <cstdio>
using namespace std;
int maxn=1000+20;
int main(){
    int n;
    int res[maxn];
    while(scanf("%d",&n)&&n!=0){
        int d;
        while(scanf("%d",&d)&&d) {
            memset(res, 0, maxn);
            stack<int> s;
            int A = 1, B = 1;
            res[1]=d;
            for (int i = 2; i <= n; i++) {
                scanf("%d", &res[i]);
            }
            int ok = 1;
            while (B <= n) {
                if(A>n){ok=0;break;}
                if (A == res[B]) {
                    A++;
                    B++;
                }
                else if (!s.empty() && s.top() == res[B]) {
                    s.pop();
                    B++;
                }
                else if (A <= n) s.push(A++);
                else {
                    ok = 0;
                    break;
                }
            }
            printf("%s\n", ok ? "Yes" : "No");

        }
        printf("\n");
    }
    return 0;
}