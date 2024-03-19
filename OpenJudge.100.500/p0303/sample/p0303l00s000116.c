#include <stdio.h>
#define MAX 100000

int n,k;
long long T[MAX];

int check(long long p){
  int i=0,j;
  long long s;
 
  for(j=0;j<k;j++){
    s = 0;
    while(s + T[i] <= p){
      s += T[i];
      i++;
      if(i == n) return n;
    }
  }
  return 1;
}

int solve(){
  int v;
  long long left=0;
  long long right=MAX*10000;
  long long mid;
  while(right-left>1){
    mid = (right+left)/2;
    v = check(mid);
    if(v >= n) right = mid;
    else left = mid;
  }
  return right;
}

int main(){
  int i;
  long long ans;
  scanf("%d %d",&n,&k);;
  for(i=0;i<n;i++) scanf("%ld",&T[i]);
  ans = solve();
  printf("%ld\n",ans);
  return 0;
}