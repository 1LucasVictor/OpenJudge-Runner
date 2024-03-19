#include<stdio.h>
typedef long long ll;
int main(void){
  
  int n,i;
  ll d;
  ll x[100001],y[100001];
  scanf("%d %lld",&n,&d);
  for(i=0;i<n;i++){
   scanf("%lld %lld",&x[i],&y[i]); 
  }
  
   int cnt = 0;
	for(i=0;i<n;i++){
      ll a = x[i]*x[i];
      ll b = y[i]*y[i];
      ll c = d * d;
      if(a+b <= c) cnt++;
    }
  printf("%d",cnt);
}