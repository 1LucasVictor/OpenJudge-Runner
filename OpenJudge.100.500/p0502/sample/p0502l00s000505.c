#include<stdio.h>

int main(void)
{

	int N,A,b=0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		scanf("%d", &A);
		if (A % 2 == 0) {
			if (A % 3 == 0 || A % 5 == 0) {

			}
			else
			{
				printf("DENIED");
				return 0;
			}
		}
	}
	printf("APPROVED");
	
	return 0;
}