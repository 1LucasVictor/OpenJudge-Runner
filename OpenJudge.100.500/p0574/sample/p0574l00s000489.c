#include<stdio.h>

int main(void) {
	int i = 0;
	char num[5];
	scanf("%s", num);
	while (i < 3) {
		if (num[i] == num[i + 1]) {
			printf("Bad\n");
			break;
		}
		if (i == 2) {
			printf("Good\n");
			break;
		}
		i++;
	}
	return 0;
}