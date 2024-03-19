#include<stdio.h>
int main(){
  int n,m,a=0;    
  int i,j;
  scanf ("%d%d",&n,&m);

  int score[100][100];
  int b[100];
  int c[100];

  for(i=0;i<100;i++){
    for(j=0;j<100;j++){
      score[i][j]=0;
      b[j]=0;
      c[i]=0;
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&a);
      score[i][j]=a;
    }
  }

  for(j=0;j<m;j++){
    scanf("%d",&a);
    b[j]=a;
  }

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      c[i]=c[i]+score[i][j]*b[j];
    }
    printf("%d\n",c[i]);
    
  }

 
  return 0;
}