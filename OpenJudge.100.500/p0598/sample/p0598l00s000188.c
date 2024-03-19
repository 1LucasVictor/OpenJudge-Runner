#include<stdio.h>

int main(void){
  int A,B;
  int flag = 0;
  
 scanf("%d",&A); 
 scanf("%d",&B); 
if(A == 1){
  flag = 1;
}else{
  for(int i=1;i<B;i++){
if(B%i == 0){
if(A == i){
  flag = 1;
}
}
  }
}
  if(flag == 1){
	printf("%d",A+B);
  }else{
    printf("%d",B-A);
}
}