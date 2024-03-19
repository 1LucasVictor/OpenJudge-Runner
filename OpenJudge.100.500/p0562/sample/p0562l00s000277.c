#include<stdio.h>
 
int main(void){
  int A,B;
  scanf("%d %d",&A,&B);
  
  if(A==B){
    printf("1\n");
  }else{
    for(int i=2;i++;){
      if((A-1)*(i-1)+A>=B){
        printf("%d\n",i);
        break;
      }
    }
  }
  return 0;
}