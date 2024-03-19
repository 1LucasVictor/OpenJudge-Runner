#include <stdio.h>

int main()
{
	int A,B,c;
	scanf("%d",&A);
	scanf("%d",&B);
	c=B/A;
	if(A==B)	printf("%d\n",B/A);
	else		printf("%d\n",c+1);
	return 0;
}