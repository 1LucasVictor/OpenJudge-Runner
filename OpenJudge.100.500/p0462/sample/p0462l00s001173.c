#include<stdio.h>
#include<math.h>
int main(void){
    long long int a;
    double b;
    scanf("%lld %lf",&a,&b);
    long long int ans = floor(a*b);
    printf("%lld",ans);
    return 0;
}
