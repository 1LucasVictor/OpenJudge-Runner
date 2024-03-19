#include <stdio.h>

int isprime(int);

int main(){
  int i, n, x, count = 0;
  
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d",&x);
    if(isprime(x) == 1){
      count++;
    }
  }
  printf("%d\n",count);
  
  return 0;
}

int isprime(int x){
  int i;
  
  if(x == 2)
    return 1;
  
  if(x < 2 || x % 2 == 0)
    return 0; 

  i = 3;
  while(i * i <= x){
    if(x % i == 0)
      return 0;
    i = i + 2;
  }
  return 1;
}


