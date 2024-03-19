#include<stdio.h>
#include<string.h>
int main()
{

    char str[21];
    int i,k;
    scanf("%s",str);
    k=strlen(str)-1;
    for(i=k;i>=0;i--)
    {
        printf("%c",str[i]);
    }


   return 0;
}