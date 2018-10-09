#include <stdio.h>

//#define TEST
int main() {
    #ifdef TEST
    freopen("/Users/Veronique/ClionProjects/oj/data.in","r",stdin);
    freopen("/Users/Veronique/ClionProjects/oj/data.out","w",stdout);
    #endif
    bool first=true;
    int c;

    while((c=getchar())!=EOF){
        if(c=='"'){
            if(first) {
                printf("%s", "``");
                first = false;
            }
            else{
                printf("%s","''");
                first= true;
            }
        }
        else{
            printf("%c",c);
        }
    }
    return 0;
}