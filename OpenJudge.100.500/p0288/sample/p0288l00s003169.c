#include<stdio.h>
int main(){
  int num,A[999],v,j,i,c;

  scanf("%d",&num);
  for(i = 0;i < num;i++){
    scanf("%d",&A[i]);
  }
  
 for(i = 0;i < num;i++){
      printf("%d ",A[i]);
    }
    printf("\n");

  for(i = 1;i <= num-1;i++){
    v = A[i];
    j = i - 1;
    while(j >= 0 && A[j] > v){
      A[j+1] = A[j];
      j--;
    }
      A[j+1] = v;
    for(c = 0;c < num;c++){
      printf("%d ",A[c]);
    }
    printf("\n");

  }

  return 0;
}