#include<stdio.h>

#define N 100

int main(){
  int i,j,A[N];
  int length;  //データの長さ
  int key;

  scanf("%d",&length);
  
  for(i = 0;i < length;i++){   //入力
    scanf("%d",&A[i]);
    printf("%d ",A[i]);
  }
  printf("\n");
  
  for(j = 1;j < length;j++){
    key = A[j];
    i = j - 1;
    while(i >= 0 && A[i] > key){
      A[i+1]=A[i];
      i = i- 1;
      A[i+1] = key;
    }
    for(i = 0;i < length;i++){   //表示
      printf("%d ",A[i]);
    }
    printf("\n");
  }
}