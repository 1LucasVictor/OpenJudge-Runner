#include <stdio.h>

int isPrime(int);

int main(){
  int num[10000];
  int n, i;
  int x =0;

  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    scanf("%d", &num[i]);

    x += isPrime(num[i]);
  }
  printf("\n%d", x);

  return 0;
}
  

  
int isPrime(int num){
  int i;
  
  if (num <= 1) return 0;
  if (num % 2 == 0 && num > 2) return 0;
  for(i = 3; i < num / 2; i += 2){
    if (num % i == 0)return 0;
  }
  return 1;
}