#include <stdio.h>

int main(void)
{
	int A,B;

	scanf("%d",&A);
	scanf("%d",&B);

	if(B%A)
		printf("%d\n",B/A+1);
	else
		printf("%d\n",B/A);

	return 0;
}
