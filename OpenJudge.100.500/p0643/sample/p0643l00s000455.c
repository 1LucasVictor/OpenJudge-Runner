#include <stdio.h>

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(((a*b)%2) == 0) printf("Even\n");
	else if(((a*b)%2) != 0) printf("Odd\n");
	return 0;
}

