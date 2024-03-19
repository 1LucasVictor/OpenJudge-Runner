#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define false 0
#define true 1
int isPrime(int);
int main()
{
  int n,*array,i,count = 0;

  scanf("%d",&n);
  array = (int *)malloc(n * sizeof(int));

  for(i = 0 ; i < n ; i++) scanf("%d",&array[i]);

  for(i = 0 ; i < n ; i++){
    if(isPrime(array[i]) == true) count++; }

  printf("%d\n",count);
  

  return 0;
}

int isPrime(int x){
  int i;
  if(x == 2) return true;

  if(x < 2 || x%2 == 0) return false;

  i = 3;
  while(i <= sqrt(x)){
    if(x%i == 0) return false;
    i = i + 2; }

  return true;
}

