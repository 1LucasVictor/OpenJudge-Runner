#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b;
    scanf("%lli",&a);
    b=a/500;
    a=a%500;
    b=b*1000+(a/5)*5;
    printf("%lli\n",b);
    return 0;
}
