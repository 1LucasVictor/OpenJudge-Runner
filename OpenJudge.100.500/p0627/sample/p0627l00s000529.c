#include <stdio.h>

int main()
{
	int a, b, add, sub, mul, max;
  	scanf("%d%d", &a, &b);
  	add = a + b; sub = a - b; mul = a * b;
	max = add;
  	if (max < sub) max = sub;
  	if (max < mul) max = mul;
  	
  	printf("%d", max);
}