#include<stdio.h>

int main(void){
  int n , m;
  long long k;
  scanf("%d %d %lld",&n ,&m ,&k);

  long long a[n] , b[m];
  long long atas[200010] = {0} , btas[200010] = {0};
  for(int i = 0;i < n;i ++){
    scanf("%lld",&a[i]);
    atas[i+1] = a[i] + atas[i]; 
  }

  for(int i = 0;i < m;i ++){
    scanf("%lld",&b[i]);
    btas[i+1] = b[i] + btas[i];
  }
  
  long long ans = 0 , max = 0;
  for(int i = 0;i < n+1;i ++){
    for(int j = m;j > 0;j --){
      
      if(k >= atas[i] + btas[j]){
        ans = i + j;
      }

      if(max < ans){
        max = ans;
        j = 0;
      }
      ans = 0;
    }
  }


  printf("%lld\n",max);


  return 0;
}