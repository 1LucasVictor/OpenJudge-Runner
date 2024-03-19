#include<stdio.h>
#include<math.h>

void main(){
  long long int n, k, x, xmin;
  scanf("%lld %lld", &n, &k);
  
  x = n-k;
  while(x>0)
    x -= k;
  x = -x;
  xmin = abs(x-k);
//  printf("%lld %lld\n", x, xmin);
  if(xmin>x)
    xmin = x;
  
  printf("%lld",xmin);
}