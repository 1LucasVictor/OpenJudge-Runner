#include<stdio.h>
#include<math.h>

int main(){

    double a;
    double b;

    scanf("%lf %lf",&a,&b);

    printf("%.0lf",floor(a*b));

    return 0;
}