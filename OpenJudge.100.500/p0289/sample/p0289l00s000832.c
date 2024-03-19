#include<stdio.h>

int main(void) 
{

	int x, y, a, b;
	
	scanf ("%d %d" ,&x ,&y);
	if (x < y){
	a = x;
	x = y;
	y = a;
}
	while (y > 0){
	b = x % y;
	x = y;
	y = b;
	} 

	printf("%d \n" ,x);

	return 0;
}
	