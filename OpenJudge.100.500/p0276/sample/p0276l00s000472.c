#include<stdio.h>

#define N 100

int main(){
  int key[N][N];
  int n,i,j,m,l,o;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      key[i][j]=0;
    }
  }

  for(i=0;i<n;i++){
     scanf("%d%d",&m,&l);
    m--;
    for(j=0;j<l;j++){
      scanf("%d",&o);
      o--;
      key[m][o]=1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j>0) printf(" ");
      printf("%d",key[i][j]);
    }
    printf("\n");
  }

  return 0;
}

