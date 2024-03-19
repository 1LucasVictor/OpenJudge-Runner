#include <stdio.h>
#include<math.h>
int isPrime(int x){
  int i;

  if(x == 2)    return 1;
  if(x < 2 || x % 2 == 0)    return 0;

  i = 3;
  while(i <= sqrt(x)){
    if(x % i == 0)    return 0;
    i += 2;
  }

  return 1;
}

int main(){
  int n, x, i;
  int cnt = 0;
  scanf("%d", &n);
  for ( i = 0; i < n; i++){
    scanf("%d", &x);
    if(isPrime(x))cnt++;
  }
  printf("%d\n", cnt);

  return 0;
}