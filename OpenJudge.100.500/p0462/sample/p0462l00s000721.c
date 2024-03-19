#include<stdio.h>
#include<math.h>
int main(){
  long a,c;
  float b;
  scanf("%ld%f",&a,&b);
  c=b*100;
  a=floorl(a*c);
  a/=100;
  printf("%ld",a);
  return 0;
}