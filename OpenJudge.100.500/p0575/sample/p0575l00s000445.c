#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x, a;
	
	scanf("%d %d", &x, &a);
	
	
	if(x < a)
		printf("0");
	else
		printf("10");
	
	return 0;
}