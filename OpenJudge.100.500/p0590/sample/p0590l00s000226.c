#include<stdio.h>

int main(){
  int i,j,k;
  int A[5];
  for(i=0;i<5;i++){
    scanf("%d",&A[i]);
  }
  scanf("%d",&k);
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      if(abs(A[j]-A[i])>k){
        puts(":(");
        return 0;
      }
    }
  }
  puts("Yay!");
  return 0;
}