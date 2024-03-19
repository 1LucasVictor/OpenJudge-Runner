#include<stdio.h>

int main(void){
	int x;
	int y;
	int z;
	
	scanf("%d %d", &x, &y);
	z = x/y;
  	if (x%y !=0)
		z++;
	printf("%d\n", z);
	}


