#include<stdio.h>

int n,k;
int w[100000];

int check(long long int P){
  int i=0,j;

  for(j=1;j<=k;j++){
    int s=0;
    while(s+w[i]<=P){
      s+=w[i];
      i++;
      if(i==n){
        return n;
      }
    }
  }
  return i;
}

int main(void){
  int i;
  long long int left = 0, right = 100000*10000;

  scanf("%d %d",&n, &k);
  for(i=0; i<n; i++){
    scanf("%d",&w[i]);
  }

  while(right-left>1){
    long long int mid = (left+right)/2;
    int v = check(mid);
    if(v<n){
      left = mid;
    }else{
      right = mid;
    }
  }
  printf("%lld\n",right);

  return 0;
}

