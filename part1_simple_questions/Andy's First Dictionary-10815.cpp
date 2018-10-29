#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <sstream>
using namespace std;
set<string> dic;
int main(){
    string s,buf;
    while(cin>>s){
        for(int i=0;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z') s[i]=tolower(s[i]);
            else if(s[i]>='a'&&s[i]<='z') continue;
            else s[i]=' ';
        }

        stringstream ss(s);
        while(ss>>buf) dic.insert(buf);
    }

    for(set<string>::iterator it=dic.begin();it!=dic.end();++it)
        cout<<*it<<endl;
    return 0;
}