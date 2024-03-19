#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

double logn(int base, double antilog) {
    return log(antilog) / log((double)base);
}

int main(void){
  int n,count = 0;
  double d;
  scanf("%d %lf",&n,&d);
  d = logn(10,d);
  double p,q,x[n],y[n];
  rep(i,0,n){
    scanf("%lf %lf",&p,&q);
    x[i] = logn(10,p*p+q*q)/2;
  }
  rep(i,0,n){
    if(x[i] <= d){
	count++;
      }
  }
  printf("%d",count);
  return 0;
}