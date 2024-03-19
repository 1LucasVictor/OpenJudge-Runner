
#include<stdio.h>

#define  NUM  3

int main(void)
{
	int i, j;
	int x[NUM] = { 0 };
	
	for (i = 0; i < NUM; i++)
		scanf("%d", &x[i]);

	for (i = 0; i < NUM - 1; i++) {
		for (j = i + 1; j < NUM; j++) {
			if (x[i] > x[j]) {
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}

	printf("%d %d %d\n", x[0], x[1], x[2]);

	return 0;
}