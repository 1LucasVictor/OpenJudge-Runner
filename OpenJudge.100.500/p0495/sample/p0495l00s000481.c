#include<stdio.h>
#include<string.h>

int main()
{
    char s[4];
    scanf("%s",&s);
    int flag =0;
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]!=s[i+1])
        {
            flag=1;
            break;
        }
    }
    flag==1? printf("Yes"):printf("No");
    return 0;

    }
