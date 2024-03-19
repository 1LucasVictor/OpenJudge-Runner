#include<stdio.h>
int main()
{
    char ch[100];
    scanf("%[^\n]s",ch);
    if(ch[0] == ch[1] && ch[2]==ch[3] || ch[0] == ch[2] && ch[1]==ch[3] || ch[0] == ch[3] && ch[1]==ch[2]) printf("Yes");
    else printf("No");
    return 0;
}
