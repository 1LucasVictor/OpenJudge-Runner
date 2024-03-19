#include<stdio.h>
int main(void){

long a;
double b;
  scanf("%ld %lf",&a,&b);
  int c=b*100+0.0000001;
  printf("%ld\n",(long)(a*c/100));

return 0;
}
