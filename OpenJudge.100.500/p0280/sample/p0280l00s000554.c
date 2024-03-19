#include<stdio.h>
int main(void){
  int n,i,j;
  int x=0,a=2000;
  int key[101][101];
  
  scanf("%d",&n);
  
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&key[i][j]);
    }
  }
  
  for(i=2;i<=n;i++){
    for(j=1;j<=n;j++){
      if(key[i][j] > 0 && key[i][j] < a){
	a=key[i][j];
      }
    }
    x=a+x;
    a=2000;
  }

  printf("%d\n",x);

  return 0;
}