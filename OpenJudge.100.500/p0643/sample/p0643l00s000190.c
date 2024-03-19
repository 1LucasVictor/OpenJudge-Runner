#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

	int a,b;

	int s = scanf("%d %d", &a,&b);
	if(s < 2){
		exit(1);
	}

	if(a * b % 2 == 0){
		printf("Even");
	}

	else{
		printf("Odd");
	}
	
  return 0;
  
}