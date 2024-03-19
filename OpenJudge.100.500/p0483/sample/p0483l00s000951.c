#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],l;
    scanf("%s",&str);
    l=strlen(str);
    if(l==3)
    {
        if(str[0]=='7'||str[1]=='7'||str[2]=='7')
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }
    return 0;
}
