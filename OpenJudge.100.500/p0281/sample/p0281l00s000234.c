#include<stdio.h>
#define N 101
#define M 10000001
 
int main()
{
  int i,j,n,v,c,a,b;
  int sum[N][N],num[N],tum[N],hum[N],min,i2;
 
  for(i=0;i<N;i++){
    for(j=0;j<N;j++)
      sum[i][j] = -1;
  }
 
  scanf("%d",&n);
 
  for(i = 0; i < n; i++){
    scanf("%d%d",&v,&c);
    for(j = 0; j < c; j++){
      scanf("%d%d",&b,&a);
      sum[v][b] = a;
    }
  }
 
  for(i=0;i<n;i++){
    num[i]=0;
    hum[i]=-1;
    tum[i]=M;
  }
 
  tum[0] = 0;
 
  while(1){
    min= M;
    for(i = 0; i < n; i++){
      if(num[i] != 2 && tum[i] < min){
        min= tum[i];
        i2 = i;
      }
    }
    if(min== M)break;
 
    num[i2] = 2;
 
 
    for(i = 0; i < n; i++){
      if(sum[i2][i] != -1 && num[i] != 2 && (sum[i2][i]+tum[i2]) < tum[i]){
        hum[i] = i2;
        tum[i] = sum[i2][i] + tum[i2];
        num[i] = 1;
      }
    }
  }
  for(i = 0; i < n; i++)printf("%d %d\n",i,tum[i]);
    return 0;
}
     

