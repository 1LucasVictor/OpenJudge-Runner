#include <stdio.h>
int main()
{
	int a, b, soma, sub, mul, maior;
	scanf("%d %d\n", &a, &b);
	soma = a + b;
	sub = a - b;
	mul = a * b;
	maior = soma;
	if (maior < sub)
	{
		maior = sub;
	}
	if (maior < mul)
	{
		maior = mul;
	}
	printf("%d\n", maior);
return 0;
}