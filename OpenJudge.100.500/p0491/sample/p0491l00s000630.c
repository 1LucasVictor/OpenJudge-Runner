#include<stdio.h>
#include<math.h>

void main(){
  long long int n, k, x, xmin;
  int logx, logk;
  scanf("%lld %lld", &n, &k);
  logk = log(k);
  
  x = n-k; 
  while(x>0){
    logx = log(x);
    if(logx>logk)
      x -= pow(10,logx-logk)*k;
    else
      x -= k;    
  }
  x = -x;
  while(x>0){
    x -= k;    
  }
  x = -x;
  xmin = labs(x-k);
  x = labs(xmin-k);
//  printf("%lld %lld\n", x, xmin);
  if(xmin>x)
    xmin = x;
  
  printf("%lld",xmin);
}