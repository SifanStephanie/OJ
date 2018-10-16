#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return(*(int *)a-*(int *)b);
}
int main() {
    char s1[110]={'\0'};
    char s2[110]={'\0'};
    while(scanf("%s",s1)==1&&scanf("%s",s2)==1){
        int cnt1[26]={0};
        int cnt2[26]={0};
        for(int i=0;s1[i]!='\0'&&i<110;i++){
            cnt1[s1[i]-'A']++;
            cnt2[s2[i]-'A']++;
        }
        qsort(cnt1,26, sizeof(cnt1[0]),cmp);
        qsort(cnt2,26, sizeof(cnt2[0]),cmp);
        int ok=1;
        for(int i=0;i<26;i++){
            if(cnt1[i]!=cnt2[i]){
                ok= false;
            }
        }
        if(ok)
            printf("YES\n");
        else printf("NO\n");
        memset(s1,'\0',110);
        memset(s2,'\0',110);

    }
    return 0;
}