#include <stdio.h>
#include <stdlib.h>

int main() {
	char a,b,c,d;
	scanf("%c %c %c %c", &a, &b, &c, &d);
	if ((a==b)||(b==c)||(c==d)) {
		printf("Bad\n");
	}else{
		printf("Good\n");
	}
}