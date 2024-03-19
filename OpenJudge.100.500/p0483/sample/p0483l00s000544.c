#include<stdio.h>
 
int main(void){
  
  int N,Flag = 0;
  scanf("%d",&N);
  
  if( N%10 == 7){
	Flag = 1;
  }else{
    N = N/10;
  }
  
  if( N%10 == 7 ){
	Flag = 1;
  }else{
    N = N/10;
  }
  
   if( N%10 == 7 ){
	Flag = 1;
  }else{

  }

  if( Flag == 1 ){
    printf("Yes");
  }else{
    printf("No");
  }
  
  return 0;
 
}