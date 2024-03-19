#include <stdio.h>

int main(){

	int a, b, c, d, aux;
	
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a > c){
		aux = a;
		a = c;
		c = aux;
		aux = b;
		b = d;
		d = aux;
	}
	if (c > b)
		printf("0\n");
	else
		if (d > b)
			printf("%d\n", b-c);
		else
			printf("%d\n", d-c);

	return 0;
}
