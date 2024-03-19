#include<stdio.h>

int isPrime(int);

int main(){
  int n,i,j,c=0;
  int a[100];

  scanf("%d",&n);

  for(i=0 ; i<n ; i++){
    scanf("%d",&a[i]);
  }

  for(i=0 ; i<n ; i++){
    c += isPrime(a[i]);
  }

  printf("%d\n",c);

  return 0;
}

int isPrime(int a){
  int i;

  for(i=2 ; i<a ; i++){
    if(a % i == 0) return 0;
  }
  return 1;
}