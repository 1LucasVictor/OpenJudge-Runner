#include<stdio.h>

int main(void){
  int i,n,m,j,b[1000],a[1000][1000],c[1000];

  scanf("%d %d",&n,&m);

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      c[i]=0;
      scanf("%d",&a[i][j]);
    }
  }

  for(i=0;i<m;i++){
    scanf("%d",&b[i]);
  }

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      c[i]=(a[i][j]*b[j])+c[i];
    }
  }

  for(i=0;i<n;i++){
    printf("%d\n",c[i]);
  }
}

