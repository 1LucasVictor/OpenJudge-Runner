#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
double a;
double b;
double c;
scanf("%lf",&a);
scanf("%lf",&b);
b=b*100;
c=b*a;
//printf("%d\n",c);
printf("%lld",(long long int)c/100);
}