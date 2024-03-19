#include <stdio.h>
int main(void){
  char stn[3];
  scanf("%s",&stn);
  if(stn=="AAA" || stn=="BBB"){
    printf("No");
  }else{
    printf("Yes");
  }
  return 0;
}
