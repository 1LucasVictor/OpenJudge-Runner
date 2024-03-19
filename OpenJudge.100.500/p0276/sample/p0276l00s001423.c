#include <stdio.h>
#define HEN 1
int main(){
  int A[100][100];
  int a,b,c,d,i,j,k,n;

  scanf("%d",&n);

  for(i=0; i < n;i++){
    for(j=0; j < n;j++){
      A[i][j]=0;
    }
  }

  for(i=0; i < n;i++){

    scanf("%d %d",&c,&d);
    c=c-1;
    
    for(j=0; j < d; j++){
      
      scanf("%d",&k);
      k=k-1;
      A[c][k]=HEN;
    }
  }

  for(i=0; i < n;i++){
    for(j=0; j < n;j++){
      if(j){
        printf(" ");
      }
      printf("%d",A[i][j]);
    }
    printf("\n");
  }
  return 0;
}

