#include <stdio.h>

int main(void)
{
	char a,b;
	scanf("%hhd %hhd",&a,&b);
	if (b%a==0) printf("%hhd\n",a+b);
	else printf("%hhd\n",b-a);

	
	return 0;
}
