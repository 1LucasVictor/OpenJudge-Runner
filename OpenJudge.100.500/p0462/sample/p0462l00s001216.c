#include <stdio.h>

int main(void){

unsigned long long a;
double b;

unsigned long long c;

scanf("%llu%lf",&a,&b);

b = b*1000;//小数足したのはdoubleの精度を考慮
c = (a*b)/1000;

printf("%llu\n",c);
return 0;
}
