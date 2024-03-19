    #include <stdio.h>
     
    int main()
    {long int a; float b;
    scanf("%ld %f",&a,&b);
    printf("%d",(int)((long double)a*(long double) b));
        return 0;
    }