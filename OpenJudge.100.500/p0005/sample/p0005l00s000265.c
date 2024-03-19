#include<stdio.h>
#include<string.h>
char str[20],cpy[20];
int stl,i;
int main()
{
    scanf("%s",str);
    stl = strlen(str);
    for(i=0;i<stl;i++)
    {
        cpy[i] = str[stl-i-1];
    }
    printf("%s\n",cpy);
    return 0;
}