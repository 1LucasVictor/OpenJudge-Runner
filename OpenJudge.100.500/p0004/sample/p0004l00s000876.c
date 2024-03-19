#include <stdio.h>

int main(void)
{
    unsigned long long int a, b, gcm, lcm, temp_a, temp_b, temp;

    while(scanf("%lld %lld", &a, &b) != EOF)
    {
        // GCM
        if(a<b)
        {
            a = temp;
            a = b;
            b = temp;
        }
        temp_a = a;
        temp_b = b;
        while(temp_a%temp_b != 0)
        {
            temp = temp_a%temp_b;
            temp_a = temp_b;
            temp_b = temp;
        }
        gcm = temp_b;
        lcm = a*b/gcm;
        printf("%lld %lld\n", gcm, lcm);
    }

    return 0;
}
