        #include <stdio.h>
         
        int main()
        {long int a; double b,c;
        scanf("%ld %lf %lf",&a,&b,&c);
        b=100*b+c;
        a=a*(long int)b;
        a=(a-a%100)/100;
        printf("%ld",a);
            return 0;
        }