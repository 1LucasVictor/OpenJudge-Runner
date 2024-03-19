#include<stdio.h>
//UG 02 53 20 020
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

if (a+b>=a-b&&a+b>=a*b)
    printf("%d",a+b);

else if(a+b>=a-b&&a+b>=a+b)
    printf("%d",a-b);

else if(a+b>=a-b&&a+b>=a-b)
    printf("%d",a*b);

else if(a+b>=a-b&&a+b>=a*b)
    printf("%d",a-b);

return 0;

}

