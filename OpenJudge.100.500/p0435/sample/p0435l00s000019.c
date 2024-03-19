#include<stdio.h>
#include<math.h>
long long n,d,x,y,i,p=0;
int main(void)
{
  scanf("%lld%lld",&n,&d);
  d*=d;
  for(i=0;i<n;i++){
    scanf("%lld%lld",&x,&y);
    if(d>=(x*x)+(y*y)){
      p++;  
  }
  }
  printf("%d\n",p);
  return 0;
}