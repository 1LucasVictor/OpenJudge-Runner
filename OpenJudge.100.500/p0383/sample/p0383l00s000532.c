#include<stdio.h>
int main(){
  
  int a[105][105],b[105][105];
  int ac,bc,n,m,l,i,j,k;
  long long c[105][105];

  for(i=0;i<105;i++){
    for(j=0;j<105;j++){
      c[i][j]=0;
    }
  }

  scanf("%d%d%d",&n,&m,&l);
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<l;j++){
      scanf("%d",&b[i][j]);
    }
  }
  
  for(i=0;i<=n+1;i++){
    for(j=0;j<=l+1;j++){
      for(k=0;k<=m+1;k++){
	
	c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      printf("%lld",c[i][j]);
      if(j<l-1){
	printf(" ");
      }
    }
    puts("");
  }
  
  return 0;
}