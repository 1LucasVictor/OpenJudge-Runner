#include<stdio.h>

int main(void){
    long long int A,BB;
    double B;
    scanf("%lld %lf",&A,&B);
    BB=(long long int)(B*100);
    long long int ans=(long long int)(A*BB);
    printf("%lld\n",ans/100);
    return 0;
}