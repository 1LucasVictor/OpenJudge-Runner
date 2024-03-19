#include<stdio.h>
 
int main(void){
  char str[4];
  int flag=0;
  scanf("%s",&str);
  
  for (int i=0;i<3;i++){
    if(str[i]==str[i+1]){
      flag=1;
    }
  }
  
  if(flag==0){
    printf("Good");
  }else{
    printf("Bad");
  }
  
  return 0;
}