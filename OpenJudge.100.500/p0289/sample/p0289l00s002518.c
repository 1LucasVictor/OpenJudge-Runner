#include <stdio.h>


int gcd(int x,int y);


int main(void){
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d\n", gcd(x,y));
	
	return 0;
}

int gcd(int x,int y){
	
	
	return (y > 0) ? gcd(y, x%y):x;
}
