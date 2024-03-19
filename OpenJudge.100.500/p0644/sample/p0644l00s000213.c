#include <stdio.h>

int main() {

	int a, b, c, d;
	
	scanf("%d", &a);
    b = a % 100 % 10;
    c = (a / 10) % 10;
  	d = a / 100;
    printf("%d", b + c + d);
	
	return (0);

}