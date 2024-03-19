#include<stdio.h>

int isPrime(int);

int main(){
  int i,l,count,a;

  count = 0;
  
  scanf("%d",&l);
  
  for(i = 0; i < l; i++){
    scanf("%d",&a);
    count += isPrime(a);
  }

  printf("%d\n",count);
  
  return 0;
  
}

int isPrime(int a){
  int i;
    if(a < 2) return 0;
    else if(a == 2) return 1;
    else if(a % 2 == 0) return 0;
    else {
      for(i = 3; i <= a/i; i += 2)
	if((a % i) == 0) {
	  return 0;
	}
    }
    return 1;
}

