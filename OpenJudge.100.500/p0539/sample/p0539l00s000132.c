#include <stdio.h>

int main(int argc, char **argv)
{
	int i, n, flag = 0;
	
	scanf("%d", &n);
	
	for (i = 1; i < 10; i++)
		if ((n % i == 0) && (n / i < 10)){
			flag = 1;
			break;
		}
	
	if (flag)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
