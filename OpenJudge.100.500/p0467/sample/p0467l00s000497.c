#include <stdio.h>
#include <stdint.h>

int main(void){
  long int a,b,c,k;
  scanf("%ld",&a);
  scanf("%ld",&b);
  scanf("%ld",&c);
  scanf("%ld",&k);
  
  if((a+b)>=k){
  	printf("%ld",a);
  }else{
    int useC;
    useC=k-a-b;
  	printf("%ld",(a-useC));
  }
  	return 0;
}