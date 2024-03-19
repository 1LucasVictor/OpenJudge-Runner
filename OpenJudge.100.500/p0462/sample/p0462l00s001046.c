#include<stdio.h>
int main(){
    double a;
    double b;
    scanf("%lf %lf",&a,&b);
    double x=a*b;
    long long int y=x;
    printf("%llu\n",y);
}