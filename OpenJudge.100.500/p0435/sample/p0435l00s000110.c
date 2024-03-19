#include<stdio.h>
int main(){
  long long n, d;scanf("%lld %lld", &n, &d);
  
  int cnt=0;
  for(int i=0;i<n;i++) {
    long long a, b;scanf("%lld %lld", &a, &b);
    long long r2 = a*a + b*b;
    if(r2<=d*d){
      cnt++;
    }
  }
  printf("%d\n", cnt);
}