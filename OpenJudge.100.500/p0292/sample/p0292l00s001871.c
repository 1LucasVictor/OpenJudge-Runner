#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int kuuhaku(char str[], char tok[][20][20],int seisu[], int n)
{
	char *p = str;
	int i = 0;
	strtok(p, " ");
	strcpy(tok[i], p);

	while (1) {
		i++;
		p = strtok(NULL, " ");
		if (p == NULL)
			break;
		strcpy(tok[0][i], p);
	}

	for (i = 0; i < n; i++) {
		seisu[i] = atoi(tok[0][i]);
	}

	return 0;

}

int swap1(int seisu[],int cou, int n)
{
	int irekae;
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = n - 1; 0 < j; j--) {
			if (seisu[j] < seisu[j - 1]) {
				irekae = seisu[j];
				seisu[j] = seisu[j - 1];
				seisu[j - 1] = irekae;
				cou++;
			}
		}
	}
	return cou;
	
}



int main(void)
{
	int i = 0, j = 0, n = 0, count = 0;
	int seisu[250];
	char str[250];
	char tok[250];

	
	scanf("%d", &n);
	while (getchar() != '\n');

	fgets(str, sizeof(str), stdin);


	kuuhaku(str, &tok, seisu, n);

	

	count = swap1(seisu, count, n);


	for (i = 0; i < n; i++) {
		
		printf("%d", seisu[i]);
	}

	putchar('\n');

	printf("%d", count);

	return 0;

}
