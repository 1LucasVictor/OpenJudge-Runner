#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  int n,m,k;
  scanf("%d %d %d",&n,&m,&k);

  long long a[n+1];
  long long b[m+1];

  for(int i = 0;i < n;i++){
    scanf("%lld",&a[i]);
  }
  for(int i = 0;i < n;i++){
    scanf("%lld",&b[i]);
  }

  long long cnt_time = 0;
  int cnt_book = 0;
  int cnt_a = 1;
  int cnt_b = 1;

  while(cnt_time < k){
    if(a[cnt_a] <= b[cnt_b]){
      cnt_time += a[cnt_a];
      cnt_a++;
    }
    else{
      cnt_time += b[cnt_b];
      cnt_b ++;
    }
    cnt_book ++;
  }

  printf("%d",cnt_book);

  return 0;
}
