#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int i = 0, j = 0, n, count = 0;
	int seisu[20];
	char str[20];
	char tok[20][20];
	scanf("%d", &n);
	while (getchar() != '\n');
	fgets(str, sizeof(str), stdin);

	char *p = str;


	strtok(p, " ");
	strcpy(tok[i], p);

	while (1) {
		i++;
		p = strtok(NULL, " ");
		if (p == NULL)
			break;
		strcpy(tok[i], p);
	}

	for (i = 0; i < n; i++) {
		seisu[i] = atoi(tok[i]);
	}


	int irekae;

	for (i = 0; i < n; i++) {
		for (j = n - 1; 0 < j; j--) {
			if (seisu[j] < seisu[j - 1]) {
				irekae = seisu[j];
				seisu[j] = seisu[j - 1];
				seisu[j - 1] = irekae;
				count++;
			}
		}
	}

	for (i = 0; i < n; i++)
		printf("%d ", seisu[i]);

	printf("\n%d", count);

	return 0;

}
