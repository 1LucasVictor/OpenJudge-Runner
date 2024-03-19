#include<stdio.h>
#include<math.h>

int isprime(int n);

int main(void){
  int i,n,sum=0;
  int num;
  
  scanf("%d", &n);

  for(i = 0 ; i < n ; i++){
    scanf("%d",&num);
     sum += isprime(num);
  }
  
  printf("%d\n",sum);
  
  
  return 0;
}

int isprime(int n){
  int i;
 
  if(n == 2) return 1;
  else if (n % 2 == 0) return 0;
  
  
  for(i = 3 ; i <= sqrt(n) ; i+=2){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
  
}

  

