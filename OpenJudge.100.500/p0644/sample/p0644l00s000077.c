#include<stdio.h>
int main(void)
{
    int count=0;
    char s[10];
    scanf("%s",s);
    if(s[0]=='1')
        count++;
    if(s[1]=='1')
        count++;
    if(s[2]=='1')
        count++; 
    printf("%d",count);
    return 0;
}