#include <stdio.h>

int main(void){

         long long int a, b, temp, sum, GCD, LCM;

        while(scanf("%lld %lld",&a,&b) !=EOF)
        {

            if(a<b)
            {
                temp = a;
                a = b;
                b = temp;
            }

            sum = a * b;

            while( b != 0)
            {
                a = a % b;
                temp = a;
                a = b;
                b = temp;
            }

            printf("%lld %lld\n", a, sum/a);
        }
        return 0;
}