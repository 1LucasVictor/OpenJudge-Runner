#include <stdio.h>

int main(void){
	int n = 0;
  	long int d = 0;
  	long int a = 0;
  	long int b = 0;
  	int count = 0;
  
  	scanf("%d %ld",&n,&d);
  	d *= d; 
  	
  	while(n--){
    	scanf("%ld %ld",&a,&b);
      	if(d >= (a*a+b*b))count++;
    }
  
  	printf("%d\n",count);
  	return 0;
}