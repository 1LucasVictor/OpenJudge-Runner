#include<stdio.h>
int main()
{
    int count=0,i;
    char a[50],b[50];
    scanf("%s%s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            a[i]=b[i];
            count++;
        }
    }
    printf("%d",count);
    return 0;

}