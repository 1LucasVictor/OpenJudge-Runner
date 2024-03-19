#include<stdio.h>

#define MAX 1200

int main() {

	char a[MAX];
	int i,j;

	i = 0;
	while (1) {
		scanf("%c", &a[i]);
		if (a[i] == '\n') break;

		if (a[i] >= 65 && a[i] <= 90) a[i] = a[i] + 32;
		else if (a[i] >= 97 && a[i] <= 122) a[i] = a[i] - 32;
		i++;
	}

	for (j = 0; j < i; j++) {

		printf("%c", a[j]);

	}
	printf("\n");

	return 0;

}
