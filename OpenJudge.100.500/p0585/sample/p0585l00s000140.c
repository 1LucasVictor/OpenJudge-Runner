#include <stdio.h>

int main() {
	int a, b, t;
	scanf("%d %d %d", &a, &b, &t);
	int i = 1, cont = a, soma = 0;
	while(cont <= t){
		cont = a*i;
		soma = b*(i-1);
		i++;
	}
	printf("%d\n", soma);


	return 0;
}