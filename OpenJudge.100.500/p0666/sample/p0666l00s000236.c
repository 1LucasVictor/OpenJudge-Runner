#include <stdio.h>

int main(){
  int X,A,B;
  scanf("%d%d%d",&X,&A,&B);
  
  int afterLimit = B - A;
  
  if(afterLimit < 0){
    printf("delicious");
  }else if(afterLimit <= X){
    printf("safe");
  }else{
    printf("dangerous");
  }
}