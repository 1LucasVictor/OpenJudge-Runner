#include<stdio.h>

int main()
{
	int A;
	double	B;
	int C;
	scanf("%d",&A);
	scanf("%le",&B);
	C = A * B;
if(C<1)
{
  C=0;
}
	printf("%d", (int)C);
	return 0;
}