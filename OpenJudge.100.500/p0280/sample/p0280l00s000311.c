#include<stdio.h>

int main(void){
  int n,i,j,x=0,a=1001;
  int key[101][101];
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&key[i][j]);
    }
  }
  for(i=2;i<=n;i++){
  a=1001;
    for(j=1;j<=n;j++){
      if(key[i][j]!=-1&&key[i][j]<a){
        a=key[i][j];
       }
    }
   x=x+a;
  }

  printf("%d\n",x);


  return 0;
}