#include<stdio.h>

int main(){
    int c=0;
    char s[3];
    scanf("%c",&s[0]);
    scanf("%c",&s[1]);
    scanf("%c",&s[2]);
    if(s[0]=='1')c++;
    if(s[1]=='1')c++;
    if(s[2]=='1')c++;
    printf("%d\n",c);
    return 0;
}