#include <stdio.h>

int main(){
  char c, tmp;
  
  scanf("%c", &c);
  for(int i = 0;i < 2;i++){
    scanf("%c", &tmp);
    if(c != tmp){
      printf("Yes\n");
      break;
    }
  }
  if(c == tmp){
    printf("No\n");
  }
  
  return 0;
}