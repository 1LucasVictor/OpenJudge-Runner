#include <stdio.h>

int main(){
	long a,b;
    long n;

  	scanf("%ld %ld",&a,&b);
  
    n = (a + b) / 2;
  
    if((a + b)%2 == 0){
    	printf("%ld",n);	    
    }else{
    	printf("IMPOSSIBLE");
    }
  
	return 0;
}