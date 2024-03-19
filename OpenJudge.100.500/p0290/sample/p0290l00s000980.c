#include <stdio.h>
#include <math.h>

#define N 10000

int isprime(int);

int main(){

  int i,j,n,count=0;
  int num[N];
  
  scanf("%d",&n);

  for(i=0; i<n; i++){
    scanf("%d",&num[i]);
  }

  for(i=0; i<n; i++){
    
    if(isprime(num[i])==1) count++;

    }

  printf("%d\n",count);
  
  return 0;
}

int isprime(int x){

  int i;
  
  if(x == 2) return 1;

  if(x<2 || x%2==0) return -1;

  i=3;

  while (i<=sqrt(x)){
    
    if (x%i==0) return -1;

    i=i+2;
  }
  
  return 1;
  
}