#include <stdio.h>

#define N 100
#define inf 10000

int main(){

  int i, j, k, l, n, min, w[N][N], v[N], cnt=0, sum=0;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    v[i] = 0;
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&w[i][j]);
    }}
  min = inf;
  while(1){
    i=0;
    if(v[i]==0){
      for(j=0;j<n;j++){
	if(w[i][j]<min&&w[i][j]!=-1){
	  min = w[i][j];
	}}
      cnt++;
      v[j]=1;
      sum += min;
      } if(cnt == 5)break;
  }
  printf("%d\n",sum);
 
  return 0;
}

  