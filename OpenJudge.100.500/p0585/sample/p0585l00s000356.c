#include<stdio.h>

int main(){
  
  int A,B,T,i=0;
  scanf("%d %d %d",&A,&B,&T);
  for(i=0;i<21;i++)
    if(A*i>T+0.5)
      break;
  printf("%d",B*(i-1));
  
}