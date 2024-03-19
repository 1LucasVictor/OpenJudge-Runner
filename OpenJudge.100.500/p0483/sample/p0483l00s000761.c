#include <stdio.h>

int main(){
	int N;
  	scanf("%d",&N);
  
  	if((N%10) == 7){
      printf("Yes"); //1の位
    }else if(((N/10)%10) == 7){
      printf("Yes"); //10の位
    }else if((N/100) == 7) {
	  printf("Yes"); //100の位
    }else{
      printf("No");
    }
}