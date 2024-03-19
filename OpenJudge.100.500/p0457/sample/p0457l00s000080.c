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

  for(int i = 0;i < m;i ++){
    scanf("%lld",&b);
    btas[i+1] = btas[i] + b;
  }

  int bmax = m;
  int ans = 0 , count;
  for(int i = 0;i <= n;i ++){
    for(int j = bmax;j >= 0;j --){
      if(k >= atas[i] + btas[j]){
        count = i + j;
        bmax = j;
        j = -1;
        if(ans < count){
          ans = count;
        }
      }
    }
  }

  printf("%lld\n",ans);

  return 0;
}