#include<stdio.h>
int main(void)
{
    char s[4],t[4]="ABC",u[4]="ARC";
    scanf("%s",s);
    if(s[1]=='B')
        printf("%s\n",u);
    else 
        printf("%s\n",t);
    return 0;
}