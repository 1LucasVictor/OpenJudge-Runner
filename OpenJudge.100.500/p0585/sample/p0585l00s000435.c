#include <stdlib.h>
#include <stdio.h>

int main(){
	int A=0, B=0, T=0, time=0, sum=0;
  	char str[10];
  
  	fgets(str, sizeof(str), stdin);
	sscanf(str, "%d %d %d", &A, &B, &T);
  	
  	sum = T/A * B;
  
  	printf("%d", sum);
  
 	return 0; 
}
  