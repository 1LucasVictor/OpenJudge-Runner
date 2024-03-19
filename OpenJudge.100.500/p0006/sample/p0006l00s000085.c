#include <stdio.h>

int main(void)
{
	double dept;
	int i;
	
	dept = 100000;
	scanf("%d", &i);
	
	for (; i > 0; i--) {
		dept *= 1.05;
		dept += 999;
		dept = (int)(dept / 1000);
		dept *= 1000;
	}
	
	printf("%.0lf\n", dept);

	return 0;
}