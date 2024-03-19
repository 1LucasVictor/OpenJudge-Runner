#include<stdio.h>
int main()
{
    int a,sum=0;
    scanf("%d",&a);
    
    sum = a + (a*a) + (a*a*a);
    printf("%d\n",sum);
    return 0;
}