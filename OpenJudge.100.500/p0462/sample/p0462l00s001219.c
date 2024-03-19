#include<stdio.h>
 
int main(){
  long long int a;
  float b;
  scanf("%lld %f",&a,&b);
  printf("%lld",(a*(int)(100*b+0.5))/100);
}