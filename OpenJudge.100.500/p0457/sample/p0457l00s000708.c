#include<stdio.h>

int main(void){
  int n , m;
  long long k;
  scanf("%d %d %lld",&n ,&m ,&k);

  long long a[n] , b[m];
  for(int i = 0;i < n;i ++){
    scanf("%lld",&a[i]);
  }

  for(int i = 0;i < m;i ++){
    scanf("%lld",&b[i]);
  }
  

  long long atas[200010] = {0} , btas[200010] = {0};
  int ca = 0 ,cb = 0;
  for(int i = 0;i < n;i ++){
    atas[i+1] += a[i] + atas[i];
  }
  for(int i = 0;i < m;i ++){
    btas[i+1] += b[i] + btas[i];
  }
	atas[n+2] = 1000000000;
  	btas[m+2] = 1000000000;

  long long ans = 0 , max = 0;
  for(int i = 0;i < n+1;i ++){
    for(int j = 0;j < m+1;j ++){
      if(k >= atas[i] + btas[j]){
        ans = i + j;
      }

      if(max < ans){
        max = ans;
      }
      ans = 0;
    }
  }


  printf("%lld\n",max);


  return 0;
}