#include<stdio.h>
int main(){
  int G[100][100];
  int k,n,i,j;
  int t[100],y[100];
  int w,min,a,b;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    t[i]=1;
    y[i]=0;
    for(j=0;j<n;j++){
      scanf("%d",&G[i][j]);
    }
  }

  y[0]=1;
  t[0]=0;
  j=n-1;
  w=0;
  while(j--){
    min=1000000;
    for(i=0;i<n;i++){
      if(!y[i])
	continue;
      
      for(k=0;k<n;k++){
	if(!t[k])
	  continue;
	
	
	a=G[i][k];

	if(0<=a&&a<min){
	  b=k;
	  min=a;
	}
      }
    }
    y[b]=1;
    t[b]=0;
    w+=min;
  }
  printf("%d\n",w);
  return 0;
}

