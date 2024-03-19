#include<stdio.h>

int main(void)
{
	int a, b,c;
	scanf("%d",&c);
	scanf("%d %d", &a, &b);

	for (int i = 1;i * c <= b;i++) {
		if (a <= i * c && i * c <= b) {
			printf("OK");
			return 0;
		}
	}

	
		printf("NG");

	return 0;
}