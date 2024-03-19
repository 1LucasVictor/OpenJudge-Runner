#include<stdio.h>
int main()
{
    int a,i,d,j=0;
    scanf("%d",&a);
    for(i=1;i<=9;i++)
    {
       if(a%i==0)
    {
        d=a/i;
        if( d>=1 &&d<=9)

        {
            j++;
        }
    }
    }
    if(j>=1)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}
