#include<stdio.h>

int main(void){

	int a,b,c;

	scanf("%d %d %d\n", &a, &b, &c);

	if(c > b && b > a){
		printf("%d %d %d\n", a, b, c);
	}

	if(b > c && c > a){
		printf("%d %d %d\n", a, c, b);
	}

	if(a > c && c > b){
		printf("%d %d %d\n", b, c, a);
	}

	if(c > a && a > b){
		printf("%d %d %d\n", b, a, c);
	}

	if(b > a && a > c){
		printf("%d %d %d\n", c, a, b);
	}

	if(a > b && b > c){
		printf("%d %d %d\n", c, b, a);
	}

	if(a == b && b == c){
		printf("%d %d %d\n", a, a, a);
	}

	if(a == b && b > c){
		printf("%d %d %d\n", c, a, a);
	}

	if(a == b && c > b){
		printf("%d %d %d\n", a, a, c);
	}

	if(a > c && b == c){
		printf("%d %d %d\n", b, b, a);
	}

	if(c > a && b == c){
		printf("%d %d %d\n", a, b, b);
	}

return(0);
}