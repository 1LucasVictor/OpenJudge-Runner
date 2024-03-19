#include <stdio.h>

int main(void){

  int i,N;
  scanf("%d",&N);
  for(i=1;i<10;i++){
    if(N%i==0){
      if(N/i>=1&&N/i<=9){
	printf("Yes\n");
	break;
      }
      
	
    }
  }
  if(i==10){
    printf("No\n");
  }
      
  
  

  return 0;
}
