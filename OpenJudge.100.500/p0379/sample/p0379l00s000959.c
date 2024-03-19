#include <stdio.h>
#include <stdlib.h>

void Constraints(int n,int m)
{

    if(!(1<=n&&n<=100&&1<=m&&m<=100))
    {
      printf("条件を満たす入力をしてください。\n");
      exit(0);
    }
}

int main(void){
  int n,m;
  scanf(" %d %d",&n,&m);
  Constraints(n,m);
  int a[n][m];
  int b[m];
  int c[n];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      a[i][j]=0;
      b[j]=0;
    }
    c[i]=0;
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf(" %d",&a[i][j]);
    }
  }
  for(int i=0;i<m;i++){
    scanf(" %d",&b[i]);
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      c[i] += a[i][j] * b[j];
    }
  }
  for(int i=0;i<n;i++){
    printf("%d\n",c[i]);
  }

}

