#include <stdio.h>
int main(){
  long int a;
  long double b;
  long double ans;
  long int ans_2;
  scanf("%ld %Lf",&a,&b);
  ans =a*b;
  ans_2 = ans;

  printf("%ld\n",ans_2);
  return 0;
}

