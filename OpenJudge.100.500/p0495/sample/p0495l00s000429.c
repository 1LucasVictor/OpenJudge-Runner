#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef long long ll;


int main()
{
    char s[3];
    scanf("%s",s);

    if(s[0]==s[1])
    {
        if(s[1]==s[2])
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    else
    {
        printf("Yes\n");
    }
    

    return 0;
}