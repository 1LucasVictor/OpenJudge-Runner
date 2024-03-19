#include<stdio.h>
int main()
{
    char ch[4];
    scanf("%s",ch);
    if(ch[0]==ch[1] || ch[1]==ch[2] || ch[2]==ch[3]) printf("Bad");
    else printf("Good");
    return 0;
}