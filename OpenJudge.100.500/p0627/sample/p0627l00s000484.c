#include "stdio.h"

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	int x=0;
	int y=0;
	int z=0;
	
	x = a+b;
	y = a-b;
	z = a*b;
	
	if(x >= y && x >= z){
		printf("%d\n", x);
	}
	else if(y >= x && y >= z){
		printf("%d\n", y);
	}
	else if(z >= x && z>= y){
		printf("%d\n", z);
	}
	
	return (0);
}