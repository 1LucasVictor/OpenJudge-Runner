#include<stdio.h>
int main()
{
    int a,b,i,count=0;
    scanf("%d%d",&a,&b);
    for(i=0;;i++)
    {
        count++;
        a=a-b;
        if(a<0 || a==0)
        {
            break;
        }
    }
    printf("%d",count);
    return 0;
}