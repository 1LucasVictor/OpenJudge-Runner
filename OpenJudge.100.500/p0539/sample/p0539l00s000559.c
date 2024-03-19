#include<stdio.h>
int main()
{
    int i,n,x=0;
    scanf("%d",&n);
    for(i=1;i<=9;i++)
    {
        if(n%i==0 && n/i<=9)
            {
         printf("Yes\n");
         x=1;
         break;
        }


    }
     if(x==0)
        printf("No\n");

    return 0;



    return 0;
}
