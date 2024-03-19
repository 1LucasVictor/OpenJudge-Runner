#include <stdio.h>

int main(void){
    long long int a;
    double b;
    scanf("%lld %lf",&a,&b);
    long long int ans = a*(int)b;
    long long int ans2 = a*((int)(b*100)%100);
    long long int ans3 = ans + ans2/100;
    printf("%lld\n",ans3);

    return 0;
}