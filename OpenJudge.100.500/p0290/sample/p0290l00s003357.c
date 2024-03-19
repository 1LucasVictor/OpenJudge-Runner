#include <stdio.h>
#include <math.h>
#define N 10000
int Isprime(int);
int main(){
  int n,i,b=0;
  int a[N];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    if(Isprime(a[i])==1){
      b++;
    }
  }
  printf("%d\n",b);
  return 0;
}

int Isprime(x){
  int i=3;
  if(x==2){
    return 1;
  }
  if(x<2||x%2==0){
    return 0;
  }
  while(i<=sqrt(x)){
    if(x%i==0){
      return 0;
    }
    i=i+2;
  }
  return 1;
}
