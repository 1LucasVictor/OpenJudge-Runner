#include<stdio.h>

int main(void)
{

	char a[4];
	int c = 6;
	scanf("%s",&a);
	for (int i = 0; i < 3;i++) {
		
		if (a[i] == '7') {
			printf("Yes");
			return 0;
		}
	}
	printf("No");

	return 0;
}