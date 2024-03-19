#include<stdio.h>
#include<string.h>

int main(void){
  char s[11] , t[11];
  scanf("%s  %s",s , t);
  
  int n = strlen(s) , flag = 0;
  
  for(int i = 0;i < n;i ++){
    if(s[i] != t[i]){
      flag = 1;
    }
  }
  
  if(flag == 0){
    printf("Yes\n");
  }
  else{
     printf("No\n");
  }
  
  return 0;
}