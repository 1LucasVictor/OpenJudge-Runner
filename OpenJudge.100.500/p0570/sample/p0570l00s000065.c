#include<stdio.h>
#include<stdlib.h>
int main(void){

  int A,B,count=0;

  scanf("%d %d",&A,&B);

  for(count=0;count<=1000000000;count=count+1){
    if(abs(A-count)==abs(B-count)){
      printf("%d",count);
    }
  }

  if(count==0){
    printf("IMPOSSIBLE");
      }
  return 0;

}
