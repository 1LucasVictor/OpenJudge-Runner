#include <stdio.h>

int main(int argc,char* argv[]){
  int time;
  int count;
  int amount = 100000;

  scanf("%d",&time);

  for(count = 0;count < time; count++){
    
    amount *= 1.05;
    if(amount % 1000 != 0){
      amount = (amount/1000+1)*1000;
    }
    
  }
  
  printf("%d\n",amount);

  return 0;
  
}