#include<stdio.h>
#define N 100

main(){
  int i,j,m[N][N],n,l,b,o;
  scanf("%d",&b);
  for(i=1;i<=b;i++){
    for(j=1;j<=b;j++){
      m[i][j]=0;
    }
  }

  for(i=1;i<=b;i++){
    scanf("%d %d",&n,&l);
    for(j=1;j<=l;j++){
      scanf("%d",&o);
      m[i][o]=1;
    }
  }
 for(i=1;i<=b;i++){
   printf("\n");
    for(j=1;j<=b;j++){
      printf(" %d",m[i][j]);
    }
  
 }
 printf("\n");
 return 0;
}