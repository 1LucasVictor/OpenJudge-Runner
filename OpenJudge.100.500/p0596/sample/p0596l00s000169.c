#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int a,int b){return a > b ? b : a;}

int main()
{
    char s[100001];

    scanf("%s",s);

    int len = strlen(s);
    int i,j;
    int red = 0,blue = 0;

    for (i = 0; i < len; i++)
    {
        if(s[i] == '0')red++;
        else blue++;
    }

    printf("%d",min(red,blue) * 2);
}