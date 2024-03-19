#include <stdio.h>

int main()
{long int a; double b;
scanf("%ld %lf",&a,&b);
b=100*b;
a=a*(long int)b;
a=a/100;
printf("%ld",a);
    return 0;
}