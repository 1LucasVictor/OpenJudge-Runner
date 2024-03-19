#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,i,j;
  int **A;
  int id,num,col;
  scanf("%d",&n);

  A=malloc(sizeof(int *)*n);//二次元配列の動的確保
  for(i=0;i<n;i++){
    A[i]=malloc(sizeof(int)*n);
  }
  for(j=0;j<n;j++){//0に初期化
    for(i=0;i<n;i++){
      A[i][j]=0;
    }
  }
  for(i=0;i<n;i++){//入力
    scanf("%d%d",&id,&num);
    for(j=0;j<num;j++){
      scanf("%d",&col);
      A[id-1][col-1]=1;
    }
  }
  for(j=0;j<n;j++){//出力
    printf("%d",A[j][0]);
    for(i=1;i<n;i++){
      printf(" %d",A[j][i]);
    }
    printf("\n");
  }
  return 0;
}

