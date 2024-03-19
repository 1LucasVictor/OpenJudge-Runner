#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a % 2 != b % 2) {
		printf("IMPOSSIBLE\n");//AとBの偶奇が異なる場合Kは存在しない
	}
	else {
		printf("%d\n", (a + b) / 2);//偶奇が同じ場合、Kは(A+B)/2で表される
	}

	return 0;
}