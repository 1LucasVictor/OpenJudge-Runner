#include<stdio.h>
#include<stdlib.h>

int main(void){
 char num[3];
   
  scanf("%s",num);
  if(num[0] == '7' || num[1] == '7' || num[2] == '7'){
  	printf("Yes");
  }else{
  	printf("No");
  }
  
  return 0;
}
