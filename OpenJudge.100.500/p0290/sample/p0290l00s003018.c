#include <stdio.h>
#include <math.h>

#define N 10000

int main(){
  int i,n,sum=0;
  int A[N];
  int isprime(int);

  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%d",&A[i]);
  }

  for(i=0; i<n; i++){
  if(isprime(A[i])==1)
    sum++;
  }
  printf("%d\n",sum);

  return 0;
}

int isprime(int x){
  int i;

  if(x == 2)
    return 1;

  if(x < 2 || x%2==0)
    return 0; 

  i = 3;
  while(i <= sqrt(x))
    if(x%i==0)
      return 0;
  i = i + 2;

  return 1;
}