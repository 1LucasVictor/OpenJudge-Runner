#include <stdio.h>
 
int main()
{
    int n,a;
    scanf("%d",&n);
    a=n/2;
    ((n % 2) == 0)?printf("%d",a):printf("%d",a+1);
    return 0;
}