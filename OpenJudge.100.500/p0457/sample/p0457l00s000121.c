#include<stdio.h>

int main(void){
  int n , m , k;
  scanf("%d %d %d",&n ,&m ,&k);

  long long a , b;
  long long atas[200010] = {0} , btas[200010] = {0};

  for(int i = 0;i < n;i ++){
    scanf("%lld",&a);
    atas[i+1] = atas[i] + a;
  }
  atas[n+1] = 10000000000;

  for(int i = 0;i < m;i ++){
    scanf("%lld",&b);
    btas[i+1] = btas[i] + b;
  }
  btas[m+1] = 10000000000;

  int ans = 0 , count = 0;
  long long zan;

  for(int i = 0;i <= n;i ++){
    zan = k - atas[i];
    if(zan < 0){
      i += n+1;
    }
    else{
      int min = 0 , max = m+1 , mid;
      while(max - min > 1){
        mid = (max + min)/2;
        if(btas[mid] > zan){
          max = mid;
        }
        else{
          min = mid;
        }
      }
      count = i + min;
      if(ans < count){
        ans = count;
      }
    }
    
  }

  printf("%lld\n",ans);

  return 0;
}