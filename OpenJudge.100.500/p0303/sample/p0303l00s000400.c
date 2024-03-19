#include<stdio.h>

int n,k;
int w[100001];

int check(int p){
  int i;
  int sum=0;
  int idx = 0;
  for(i=0;i<k;i++){
    sum = 0;
    while(w[idx] + sum <= p){
      sum+=w[idx];
      idx++;
      if(idx == n) return 1;
    }
  }
  return 0;
}

int main(){
  int i;
  int left = 0, right = 100000 * 10000;
  int mid ;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++) scanf("%d",&w[i]);
  while(right - left > 1){
    mid = (left + right) / 2;
    if(check(mid)==1) right = mid;
    else left = mid;
  }
  printf("%d\n",right);
  return 0;
}