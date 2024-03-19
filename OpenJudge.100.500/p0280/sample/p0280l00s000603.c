#include<stdio.h>
#define INF 1000000
#define M 101
int main(){
    
  int num[M][M],n,a[M]={};
  int t[M],i,j,c;
  int min1,min2,mini,sum;

  t[1]=0;
  scanf("%d",&n);
    
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&num[i][j]);
    }
  }
  for(i=1;i<=100;i++){
    t[i]=INF;
  }
  
  min2=1;
  sum=0;
  a[1]=1;
  
  while(1){
    
    c=0;
    for(i=1;i<=n;i++){
      if(a[i]==1){
	c++;
      }
    }
    if(c==n){
      break;
    }	
    
    
    min1=10000000;
    
    for(i=1;i<=n;i++){
      if(a[i]!=1 && num[min2][i]!=-1 && t[i] > num[min2][i]){
	t[i] = num[min2][i];
      }
      if(a[i]!=1 && min1>t[i]){
	mini=i;
	min1=t[i];
      }
    }
  sum += min1;
  a[mini]=1;
  t[mini] = min1;
  min2 = mini;
  }
  printf("%d\n",sum);
  
  return 0;
}

