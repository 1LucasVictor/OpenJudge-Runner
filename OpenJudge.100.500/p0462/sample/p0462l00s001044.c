#include<stdio.h>
int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    double result=a*b;
    result=result*100;
    long long int tmp=result/100;
    printf("%lld\n",tmp);
    return 0;
}