#include <stdio.h>

int main()
{long int a; float b;
scanf("%ld %f",&a,&b);
b=100*b;
a=a*(long int)b;
a=a/100;
printf("%ld",a);
    return 0;
}