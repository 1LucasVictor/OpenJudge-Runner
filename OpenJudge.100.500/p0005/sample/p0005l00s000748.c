#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    char a[21];
    char b[21];
    int i;
    int usagi;
    scanf("%s",a);

    for(i = 0;i<= 20;i++)
    {
        if(a[i] == '\0')
        {
            usagi = i;
        }
        if(i == 19)
        {
            usagi = 20;
            a[20] = '\0';
        }
        if(usagi == i-1) break;
    }
    for(i = 0;i<=usagi;i++)
    {
        if(usagi > i)b[i] = a[usagi - 1 - i];
        else if(usagi == i) b[i] = '\0';
    }
    printf("%s\n",b);
    return 0;
}