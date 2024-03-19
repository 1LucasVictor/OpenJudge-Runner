#include <stdio.h>
int main(){
    char s[4];
    int c=0,i=0;
    scanf("%s",s);
    for(;i<3;i++)c+=s[i]=='1';
    printf("%d\n",c);
    return 0;
}