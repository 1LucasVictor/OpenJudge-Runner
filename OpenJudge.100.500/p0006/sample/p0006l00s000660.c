#include <stdio.h>

int round_sen(int n) {
  n += 999;
  n /= 1000;
  n *= 1000;
  return n;
}

int main() {

  const int money = 100000;
  int n, debt = money, week;
  
  scanf("%d", &n);
  
  for (week = 1; week <= n; week++) {
    debt *= 1.05;
    
    //printf("Week%d Debt1 : %d\t Debt2 : %d\n", week, debt, round_sen(debt));
    
    debt = round_sen(debt);
    
  }
  
  printf("%d\n", debt);
  return 0;
}