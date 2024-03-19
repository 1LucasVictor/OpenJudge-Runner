#include <stdio.h>
#include <stdbool.h>

int main(void){
	int k, a, b;
	bool c = false;

	scanf("%d %d %d", &k, &a, &b);
	for (int i = a; i <= b; i++)
		if (i % k == 0)
			c = true;
	if (c)
		printf("OK\n");
	else
		printf("NG\n");
	return 0;
}
