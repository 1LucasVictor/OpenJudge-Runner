#include <stdio.h>

int main(void){
  char str[1000];
  int flg=0;
  int i;
  
  scanf("%s", &str);
  for(i=0; i<3; i++){
    if(str[i] == str[i+1]) flg=1;
  }
  if(flg==1){
    printf("Bad");
  }else{
    printf("Good");
  }
  return 0;
}