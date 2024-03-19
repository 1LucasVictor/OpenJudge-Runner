#include <stdio.h>

int main(){
  int n,i,j,num,c,in,k=0;
  int a[101][101]={};

  
  scanf("%d",&n);
  //入力
  for(i=0;i<n;i++){
      scanf("%d%d",&num,&c);
    for(j=0;j<c;j++){
      scanf("%d",&in);
      a[num-1][in-1]++;
      
    }
  }
  //出力
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",a[i][j]);
      if(j!=n-1)printf(" ");
    }
    puts("");
  }

  return 0;
}

