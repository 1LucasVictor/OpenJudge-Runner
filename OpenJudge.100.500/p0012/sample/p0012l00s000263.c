#include <stdio.h>

int main(void){
  int stack[10];
  int i=0; // i is StackPointer.
  int temp;
  while(scanf("%d",&temp)!=EOF){
    if(temp==0){
      //POP
      i--;
      printf("%d\n",stack[i]);
    }else{
      //PUSH
      stack[i] = temp;
      i++;
    }
  }
  return(0);
}