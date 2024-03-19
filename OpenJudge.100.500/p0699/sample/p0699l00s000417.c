#include<stdio.h>
int main(void){
  int cou,A,B,C;
  scanf("%d %d %d",&A,&B,&C);
  if(A==5){
    cou++;
  }else if(A==7){
    cou--;
  }else{
    cou+=55;
  }
  if(B==5){
    cou++;
  }else if(B==7){
    cou--;
  }else{
    cou+=55;
  }
  if(C==5){
    cou++;
  }else if(C==7){
    cou--;
  }else{
    cou+=55;
  }
  
  if(cou==1){
    printf("YES");
  }else{
    printf("NO");
  }
  
  return 0;
}
    