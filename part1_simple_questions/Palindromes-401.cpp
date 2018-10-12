
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//#define TEST
const char* mirror="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char* msg[]={" -- is not a palindrome."," -- is a regular palindrome."," -- is a mirrored string."," -- is a mirrored palindrome."};
int main() {
    #ifdef TEST
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
    #endif

    char s[100];
    while(scanf("%s",s)==1) {
        bool p=true;
        bool m=true;
        for (int i = 0; i < (strlen(s)+1) / 2; i++) {
            if (s[i] != s[strlen(s) - i - 1]) {
                p = false;

            }
            int index=0;
            if(isalpha(s[i]))
                index=s[i]-'A';
            else
                index=s[i]-'0'+25;
            if (mirror[index] != s[strlen(s) - i - 1]) {
                m = false;
                if(!p)
                    break;

            }

        }
        /*
        if(p&&m) printf("%s%s",s,msg[3]);
        else if(p&&!m) printf("%s%s",s,msg[1]);
        else if(!p&&m) printf("%s%s",s,msg[2]);
        else printf("%s%s",s,msg[0]);
        */
        printf("%s%s\n",s,msg[p+2*m]);
        printf("\n");
    }

    return 0;
}