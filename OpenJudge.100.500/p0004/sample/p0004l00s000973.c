#include<stdio.h>
int main()
{
    long long int num1, num2, rem, n1, n2, GCD, LCD;
    while(scanf("%lld%lld", &num1, &num2)!=EOF){
        if(num1>=num2){
            n1=num1;
            n2=num2;
        }
        else{
            n2=num1;
            n1=num2;
        }
        while(n2!=0){
            rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        GCD=n1;
        LCD=(num1*num2)/GCD;
        printf("%lld %lld\n", GCD, LCD);

    }
    return 0;
}