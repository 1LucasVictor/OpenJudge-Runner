#include<stdio.h>
#include<math.h>

void main(){
  long long int n, k, x, xmin;
  int logx, logk;
  scanf("%lld %lld", &n, &k);
  logk = log10l(k);
  
  x = n-k; 
  while(x>0){
    logx = log10l(x);
    if(logx>logk)
      x -= pow(10,logx-logk)*k;
    else
      x -= k;    
  }
//  printf("%lld\n", x);
  x = (x > 0) ? x : -x;
  while(x>0){
    x -= k;    
  }
//  printf("%lld\n", x);
  x = (x > 0) ? x : -x;
  xmin = (x-k > 0) ? x-k : -x+k;
  x = (xmin-k > 0) ? xmin-k : -xmin+k;
//  printf("%lld %lld\n", x, xmin);
  if(xmin>x)
    xmin = x;
  
  printf("%lld",xmin);
}