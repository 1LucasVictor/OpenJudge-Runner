#include <stdio.h>

int main(void){
  int i,n;
  unsigned long long money = 100000,
                     money_;
  scanf("%d\n",&n);
  for(i = 0;i < n;i++){
    money += (unsigned long long)(money * 0.05);
    money_ = money / 1000;
    if(money_ * 1000 != money){
      money = (money_ + 1) * 1000;
    }
  }
  printf("%lu\n",money);
  return 0;
}