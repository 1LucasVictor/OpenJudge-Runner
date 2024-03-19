#include<stdio.h>
#include<math.h>

int main(void){
    double A,B;
    scanf("%lf %lf",&A,&B);
    long long int ans=(long long int)floor(A*B);
    printf("%lld\n",ans);
    return 0;
}