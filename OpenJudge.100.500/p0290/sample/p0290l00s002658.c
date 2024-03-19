#include<stdio.h>
#include<math.h>

#define N 10000

int isPrime(int x){
  int i;

  if(x==2) {return 1;}

  if(x<2 || x%2==0){ return 0;}

  i=3;

  while(i<=sqrt(x)){

    if(x%i==0) return 0;

    i=i+2;
  
  }
    return 1;
}

int main(){

  int i,n,a[N],count=0,s;

  scanf("%d",&n);

  for(i=0;i<n;i++){

    scanf("%d",&a[i]);
  
    s=isPrime(a[i]);

    if(s==1) count++;

    }

  printf("%d\n",count);

  return 0;
}