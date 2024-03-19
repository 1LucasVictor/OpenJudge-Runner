#include<stdio.h>

int main(void)
{
    long int a,b;
    scanf("%ld",&a);
    scanf("%ld",&b);

    if(a%2 == 0 && b%2 != 0 || a%2 != 0 && b%2 == 0)
        printf("\nIMPOSSIBLE\n");
    else
    {
        long int ans = (a+b)/2;
        printf("\n%ld\n",ans);
    }
    
    return 0;

}
