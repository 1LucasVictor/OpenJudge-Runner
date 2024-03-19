#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,j,c=0;
    scanf("%d",&a);
    for(i=1;i<=9;i++)
    {
            for(j=1;j<=9;j++)
{
 
        if(i*j==a)
        {
         c++;
        }
}}
 
    if(c>0)
    printf("Yes");
    else
    printf("No");
    return 0;
}