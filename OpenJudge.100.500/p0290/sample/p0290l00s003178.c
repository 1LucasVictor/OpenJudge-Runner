#include <stdio.h>
int isPrime(int);

int main(){
  int a[100000];
  int i,n,x;
  int count=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x);
    if(isPrime(x)){
      count++;
    }
  }
  printf("%d\n",count);
  return 0;
}

int isPrime(int x){
  int n,i;
  if(x==2){
    return 1;
  }
  if(x<2||x%2==0){
    return 0;
  }
  for(i=3;i*i<=x;i+=2){
    if(x%i==0){
      return 0;
    }
  }
  return 1;
}


