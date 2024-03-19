#include<stdio.h>

int main()
{
    char ch[4];

    scanf("%[^\n]",ch);

    if(ch[0]==ch[1]&&ch[2]==ch[3]&&ch[0]!=ch[2]||
            ch[0]==ch[3]&&ch[1]==ch[2]&&ch[0]!=ch[1]||
            ch[0]==ch[2]&&ch[1]==ch[3]&&ch[0]!=ch[1])
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}