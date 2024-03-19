#include<stdio.h>

int main(void){
  int n , m , k;
  scanf("%d %d %d",&n ,&m ,&k);

  long long a[n] , b[m];
  for(int i = 0;i < n;i ++){
    scanf("%lld",&a[i]);
  }

  for(int i = 0;i < m;i ++){
    scanf("%lld",&b[i]);
  }

  long long ans = 0 , count = 0;
  int counta = 0 , countb = 0;
  while(count + a[counta] <= k || count + b[countb] <= k){
    if(a[counta] < b[countb]){
      count += a[counta];
      counta ++;
      ans ++;
    }
    else{
      count += b[countb];
      countb ++;
      ans ++;
    }
  }

  printf("%lld\n",ans);

  return 0;
}