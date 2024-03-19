#include<stdio.h>

int main(){
  int g[101][101],a[101],f[101],n,i,j,k=1,m=0,num,sum=0;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&g[i][j]);
    }
  }
  
  a[0]=0;
  f[0]=1;
  
  for(i=1;i<n;i++) f[i]=0;
  
  while(1){
    num=2000;
    
    for(i=0;i<k;i++){
      for(j=0;j<n;j++){
	if(g[a[i]][j]<num && g[a[i]][j]!=-1 && f[j]!=1){
	  num=g[a[i]][j];
	  m=j;
	}
      }
    }
    
    if(k!=n){
      a[k]=m;
      f[m]=1;
      sum+=num;
      k++;
    }
    else break;
  }
  printf("%d\n",sum);
  
  return 0;
}