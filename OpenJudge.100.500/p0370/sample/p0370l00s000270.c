#include <stdio.h>
#include <math.h>

int main(void)
{
int a, b;
char op;

for (;scanf("%d %s %d",&a,&op,&b),op-'?';)
{
printf("%d\n",op=='+'?a+b:op=='-'?a-b:op=='*'?a*b:a/b);
}
	return (0);
}

