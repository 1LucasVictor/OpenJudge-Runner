#include <stdio.h>
#define A 50

int array[A];

int fibonacci(int);

int main(){
  int n, i;

  for(i = 0; i <= A; i++) array[i] = -1;
  scanf("%d", &n);
  printf("%d\n", fibonacci(n));
  
  return 0;
}
int fibonacci(int n){
  if(n == 0 || n == 1) return array[n] = 1;
  if(array[n] != -1) return array[n];
  return array[n] = fibonacci(n - 1) + fibonacci(n - 2); 
}

/*
#include <stdio.h>

int makeFibonacci(int);

int main(){
  int n;

  scanf("%d", &n);
  printf("%d\n", makeFibonacci(n));
    
  return 0;
}
int makeFibonacci(int n){
  int i, array[50];
  
  array[0] = 1;
  array[1] = 1;
  for(i = 2; i <= n; i++){
    array[i] = array[i - 1] + array[i - 2]; 
  }
  return array[i];
}
*/

