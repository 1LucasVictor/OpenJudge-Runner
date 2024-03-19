#include<stdio.h>
#define ll long long
#define N 100000
int n,k,a[N];
int chex(ll b){
  int i = 0,j,c;
    for(j = 0; j < k; j++){
        c = 0;
        while(c+a[i] <= b){
            c += a[i];
            i++;
            if(i == n)return n;
        }
    }
    return i;
}
int main(){
  int i,b;
  ll mid,min = 0,max = 100000*10000;
  scanf("%d %d",&n,&k);
  for(i = 0; i < n; i++) scanf("%d",&a[i]);

  while(min + 1 < max){
    mid = (max + min) / 2;
    b = chex(mid);
    if( b < n) min = mid;
    else max = mid;
  }
  
  printf("%d\n",max);
  
  return 0;
}


