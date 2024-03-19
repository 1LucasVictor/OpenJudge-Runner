#include<stdio.h>

int main(){
  int n, a, b;
  int train, taxi;
  
  scanf("%d %d %d", &n, &a, &b);
  
  train = n * a;
  taxi = b;
  
  printf("%d", ((train <= taxi) ? train : taxi));
  
  return 0;
}