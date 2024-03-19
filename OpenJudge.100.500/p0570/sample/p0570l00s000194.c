#include <stdio.h>
int main()
{

    int a,b,k;
    scanf("%d%d",&a,&b);
    k=(a+b)/2;
    if ((a+b)%2!=0)
    {
        printf("IMPOSSIBLE");
    }
    else
    {
        printf("%d",k);
    }

}
