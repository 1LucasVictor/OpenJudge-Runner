#include<stdio.h>

int main(){
  long a;
  double b;
  scanf("%ld%lf",&a,&b);
  long c;
  c=b*100;
  //if((double)c+0.5>b*100)c+=1;
  //printf("%ld\n",c);
  //printf("%ld\n",a*c);
  a=a*c/100;
  printf("%ld\n",a);
  return 0;
}
