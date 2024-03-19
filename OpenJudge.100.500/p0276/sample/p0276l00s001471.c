#include<stdio.h>
#define N 101
 
main(){
  int Gl[N][N];
  int i,j,v,r,s,n;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      Gl[i][j] = 0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d", &v,&r);
    for(j=0;j<r;j++){
      scanf("%d",&s);
      Gl[i][s-1] = 1;
    }
  }  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",Gl[i][j]);
      if(j < n-1){
    printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
