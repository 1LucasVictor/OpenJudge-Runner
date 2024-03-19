#include <stdio.h>

int main(){
  char n[3];
  int tmp;

  scanf("%s", n);
  
  for(int i=0; i<3; i++){
    tmp = n[i] - 48;
    if(tmp == 7){
      printf("Yes\n");
      break;
    }
    if(i == 2){
      printf("No\n");
    }
  }


  return 0;
}