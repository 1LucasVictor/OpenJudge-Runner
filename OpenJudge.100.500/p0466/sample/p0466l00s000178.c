#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ch[10];
    char ch1[11];

    int i, count=0, z, a;

    scanf("%s", ch);
    scanf("%s", ch1);

    for(i=0; i<strlen(ch); i++)
    {
        if(ch[i] == ch1[i])
        {
            count++;
        }
    }


    if(count == strlen(ch))
    {
        printf("Yes");
    }

    else
    {
        printf("No");
    }


    return 0;
}





