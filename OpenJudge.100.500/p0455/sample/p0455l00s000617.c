#include<stdio.h>
int main()
{
    unsigned long long int a;
    scanf("%llu",&a);
    a = a + a*a + a*a*a;
    printf("%llu\n",a);
    return 0;
}
