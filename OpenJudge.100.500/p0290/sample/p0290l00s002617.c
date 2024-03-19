#include<stdio.h>
#include<math.h>

#define true 1;
#define false 0;

int prime(int a);

int main(){
  int n, a;
  int count = 0;
  int i;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &a);
    if(prime(a) != 0){
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}

int prime(int a){
  int j;

  if(a == 1){
    return false;
  }
  for(j = 2; j <= sqrt(a); j++){
    if(a % j == 0){
      return false;
    }
  }
  return true;
}

