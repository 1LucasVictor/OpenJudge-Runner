#include<stdio.h>
#include<math.h>
int main(void){
    long long int a;
    float b;
    scanf("%lld %f",&a,&b);
    long long int ans = floor(a*b);
    printf("%lld",ans);
    return 0;
}
