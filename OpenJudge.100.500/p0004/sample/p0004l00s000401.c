#include <stdio.h>
long long int gcd(long long int a,long long int b){
  if(b==0)return a;
  else return gcd(b,a%b);
}
int main(){
  long long int a,b;
  long long int d;
  long long int m;
  while(scanf("%lld %lld",&a,&b)!=EOF){
  d=gcd(a,b);
  m=a/d*b;
  printf("%lld %lld\n",d,m);
  }
  return 0;
}