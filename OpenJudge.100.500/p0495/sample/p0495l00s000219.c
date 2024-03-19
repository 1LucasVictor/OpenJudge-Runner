#include <stdio.h>
int main(){
 char s[3];
 int sum;
  sum = 0;
  
  scanf("%s",&s);
  for(int i = 0;i < 3; i++){
    if(s[i] == 'A'){
      sum = sum + 1;
    }
  } 
    if(sum == 0 || sum == 3){
      printf("No");
    }
    else {
      printf("Yes");
    }
  }