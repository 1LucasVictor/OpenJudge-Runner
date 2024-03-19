#include <stdio.h>
int main(){
  char c[3];
  if(c[1] == c[2] && c[1] == c[3]){
    printf("Yes");
  }
  
  else{
    printf("No");
  }
  
  return 0;
}