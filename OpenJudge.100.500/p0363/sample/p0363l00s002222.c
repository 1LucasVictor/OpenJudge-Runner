#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	int tmp;
	scanf("%d %d %d", &a, &b, &c);
while (1)
{
	if (a <= b && b <= c)
	{
		printf("%d %d %d\n", a,b,c);
		break;
	}
	if(a > b){
		tmp = a;
		a = b;
		b = tmp;
	}
	if(a > c){
		tmp = a;
		a = c;
		c = tmp;
	}
	if(b > c){
		tmp = b;
		b = c;
		c = tmp;
	}
}

	return 0;
}
