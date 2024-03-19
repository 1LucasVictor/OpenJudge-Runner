#include <stdio.h>
 
int main(void){
  int money;
  int happiness;
  
  do{
    scanf("%d",&money);
  }while(money < 0 || money >1000000000);
  
  happiness = (money / 500) * 1000 + ((money%500) / 5) * 5;
  
  printf("%d",happiness);
  
  return 0;
}