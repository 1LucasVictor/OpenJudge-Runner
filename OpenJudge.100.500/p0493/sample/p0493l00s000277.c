#include <stdio.h>
int main(void){
  int money;
  int sen=0;
  int ichi=0;
  scanf("%d",&money);
  sen=money/500;
  money=money%500;
  ichi=money/5;
  printf("%d",sen*1000+ichi*5);
  return 0; 
 }