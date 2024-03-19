
#include <stdio.h>

int main()
{
long int a,b;
scanf("%ld%ld",&a,&b);
if(a+b>=a-b && a+b>=a*b)
{
    printf("%ld",a+b);
}else{
    if(a-b>=a+b && a-b>=a*b)
    {
        printf("%ld",a-b);
    }else{
        printf("%ld",a*b);
    }
}

    return 0;
}
