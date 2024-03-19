#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    int x,y,z;
    int i,j,k;
    char a[100],b[100];
    scanf("%s",a);
    x=strlen(a);
    for(i=0;i<=x;i++)
    {
        if(i==x)
        {
            b[i]=a[i];
        }
        else
        {
            b[x-1-i]=a[i];
        }
    }
    printf("%s\n",b);
    return 0;
}