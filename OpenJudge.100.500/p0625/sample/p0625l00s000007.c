# include <stdio.h>

int main()
{
	int cake[16];
	int A, B;
	scanf("%d %d", &A, &B);
	if (A > 8 || B > 8)
	{
		printf(":(");
		return 0;
	}
	
	printf("Yay!");
	return 0;
}