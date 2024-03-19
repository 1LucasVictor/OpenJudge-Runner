#include<stdio.h>
int main()
{
    char s[3];
    scanf("%s",s);
    for(int i=0;i<3;i++)
    {
        if(s[0]==s[1]&&s[1]==s[2]){
            printf("No\n");
        break;
    }
    else
    {
        printf("Yes\n");
        break;
    }
    }
    return 0;
}
