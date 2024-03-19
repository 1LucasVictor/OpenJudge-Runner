#include <stdio.h>

int main()
{
	int a, b, d;
	scanf("%d%d",&a,&b);
	d = a * b;
	if(d%2==0)
		printf("Even\n");
	else{
		printf("Odd\n");
	}
	return 0;
}
