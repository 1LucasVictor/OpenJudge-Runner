#include <stdio.h>
int main(){

    char s[15] ,t[15];
    scanf("%s%s", s, t);
    int a=0;
    for(int i=0;i<10;++i)
    {
        if(s[i]==t[i]){continue;}
        else if(s[i]==0){break;}
        else if(s[i]!=t[i]){a+=1;}
    }
    if(a>0){printf("No");}
    else printf("Yes");
    
    return 0;
}