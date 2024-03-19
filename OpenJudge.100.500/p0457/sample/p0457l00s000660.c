#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  long long n,m,k;
  scanf("%lld %lld %lld",&n,&m,&k);

  long long a[n+1];
  long long b[m+1];

  for(long long i = 0;i < n;i++){
    scanf("%lld",&a[i]);
  }
  for(long long i = 0;i < m;i++){
    scanf("%lld",&b[i]);
  }

  long long cnt_time = 0;
  long long cnt_book = 0;
  long long cnt_a = 0;
  long long cnt_b = 0;

  while(cnt_time < k){
    if((a[cnt_a] <= b[cnt_b])&&((cnt_time+a[cnt_a]) <= k)){
      cnt_time += a[cnt_a];
      cnt_a++;
      cnt_book++;
    }
    else if((b[cnt_b] < a[cnt_a])&&((cnt_time + b[cnt_b]) <= k)){
      cnt_time += b[cnt_b];
      cnt_b ++;
      cnt_book++ ;
    }
    else{
      break;
    }
  }

  printf("%lld",cnt_book);

  return 0;
}
