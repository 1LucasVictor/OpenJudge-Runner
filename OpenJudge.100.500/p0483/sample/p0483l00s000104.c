#include<stdio.h>

int main(void){
  char str[3];
  int ans,i;
  
  ans = 0;
  
  scanf("%s",&str);
  
  for(i=0;i<3;i++){
    if(str[i]=='7'){
      ans = 1;
    }
  }
  
  if(ans){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  
  return 0;
}