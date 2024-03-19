#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    int a,b,k,n,m;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);

    for(n=a;n<=b;n++)
    {
        if(n%k==0)
        {
            printf("OK");
            return 0;
        }
    }
    printf("NG");
    return 0;
}