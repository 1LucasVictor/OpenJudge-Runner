#include <stdio.h>
int main(){

    char s[10] ,t[10];
    scanf("%s%s", s, t);
    int a=0;
    for(int i=0;i<10;++i)
    {
        if(s[i]==t[i]){a+=1;continue;}
        else if(s[i]==0){break;}
        else if(a==1&&s[i]!=t[i]){printf("No"); return 0;}
    }
    printf("Yes");
    return 0;
}
