#include<stdio.h>
#include<math.h>

int isprime(int x){
  int i;
  double root;
  root = sqrt((double)x);
  if(x == 2)return 1;
  if(x < 2 || x%2 == 0)return 0;

  i = 3;
  while(i <= (int)root){
    if(x%i == 0)return 0;
    i = i + 2;
  }
  return 1;
}

int main(){
  int n,A[10000],i,result = 0;
  scanf("%d",&n);
  for(i = 0 ; i < n ; i++){
    scanf("%d",&A[i]);
    result += isprime(A[i]);
  }
  printf("%d\n",result);
  return 0;
}

