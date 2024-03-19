#include <stdio.h>
int main(void) {
	char a[500][10];
	int i = 0, count = 0, stack[1000];

	while (scanf("%s", &a[i]) != EOF) {
		//printf("aa\n");
		if (0 < atoi(a[i]) && atoi(a[i]) < 100000) {
			stack[count] = atoi(a[i]);
			//printf("%d\n",stack[count]);
			count++;
		} else if (*a[i] == '+') {
			stack[count - 2] = stack[count - 2] + stack[count - 1];
			//printf("op\n");
			//printf("stack:%d\n",stack[count-2]);
			count--;
		}else if (*a[i] == '-') {
			stack[count - 2] = stack[count - 2] - stack[count - 1];
			count--;
		}else if (*a[i] == '*') {
			stack[count - 2] = stack[count - 2] * stack[count - 1];
			count--;
		}
		i++;
	}
	printf("%d\n", stack[0]);
	return 0;
}