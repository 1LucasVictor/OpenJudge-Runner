#include<stdio.h>
int main(void){
	int x,y,z;
	scanf("%d %d", &x, &y);
	
	if(x > y){
		z = x % y;
		  while(z!=0){
		  x = y;
		  y = z;
		  z = x % y;
		}
		printf("%d\n", y);
	}

	else if(x < y){
		z = y % x;
		  while(z!=0){
		  y = x;
		  x = z;
		  z = y % x;
		}
		printf("%d\n", x);
	}

	else printf("%d\n", x);
}