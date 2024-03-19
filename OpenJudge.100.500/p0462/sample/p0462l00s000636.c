#include <stdio.h>

int main(void){

long long a;
double b;
int B;

scanf("%lld%lf",&a,&b);

B = b*100+0.3;

printf("%lld\n",a*B/100);
return 0;
}
