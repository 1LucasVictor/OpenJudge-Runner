#define N 1000
#include <stdio.h>
#include <math.h>
int isprime(int);

int main(){
  int a[N],n,c = 0,i,b=0;
  scanf("%d",&n);
  
  for(i = 0; i < n; i++){
    scanf("%d",&a[i]);
  }
  


  for(i = 0; i < n; i++){
    b = isprime(a[i]);
    if( b == 0 ){
      c++;
    }
  }
  printf("%d\n",c);

  return 0;
}

int isprime(x){
  int i;
  if(x == 2) return 0;

  if(x < 2 || x % 2 == 0) return 1;

  i = 3;
  while(i <= sqrt(x)){
    if(x % i == 0){
      return 1;
      i = i + 2;
    }
  }

  return 0;
}