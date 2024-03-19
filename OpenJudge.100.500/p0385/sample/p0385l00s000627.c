#include <stdio.h>
int main(){
    int i=0,t=0;
    char s[1001]={};
    for(;scanf("%s",s),s[0]!='0';printf("%d\n",t))
        for(i=0,t=0;s[i]!='\0';i++){
            t+=s[i]-'0';
        }
}