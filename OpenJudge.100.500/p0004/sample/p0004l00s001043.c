#include <stdio.h>

int main()
{
    long long int a, b;
    long long int num1, num2, keep;
    
    while(scanf("%lld %lld", &a, &b) != EOF){
    	if (a <= 0 || b <= 0) break;
        if (a >= b){num1 = a; num2 = b;}
        else       {num1 = b; num2 = a;}
        if (num1 == num2) break;
        while(num2){
            keep = num2;
            num2 = num1 % num2;
            num1 = keep;
        }
        printf("%lld %lld\n", num1, a * (b / num1));
    }
    
    return 0;
}