    #include <stdio.h>
     
    int main()
    {long int a; long double b;
    scanf("%ld %llf",&a,&b);
    b=100*b;
    a=a*(long int)b;
    a=a/100;
    printf("%ld",a);
        return 0;
    }