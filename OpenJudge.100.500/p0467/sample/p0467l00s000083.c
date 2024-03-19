#include <stdio.h>
int main(void){
    // Your code here!
long long int a, b, c, k;
scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
if (k <= a )
printf("%lld", k);
else if (k <= a + b)
printf("%lld", a);
else
    printf("%lld", a - (k - a - b));



    return (0);
}
