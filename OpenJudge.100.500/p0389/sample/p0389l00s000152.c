#include<stdio.h>
#include<string.h>

int main() {
	int  m,h, i,j,k;
	char card[201] = { 0 }, c1[201] = {0};

	scanf("%s", card);

	while (1) {
		if (card[0] == '-'){
			break;
			}

		scanf("%d", &m);

		i = 0;
		while(i<m) {
			scanf("%d", &h);
			for (j = h,k=0; j<strlen(card); j++,k++) {
				c1[k] = card[j];
			}
			for (j = 0, k; k < strlen(card); j++, k++) {
				c1[k] = card[j];
			}
			strcpy(card, c1);
			i++;
		}
		printf("%s\n", c1);
		for (i = 0; i < 201; i++) {
			card[i] = '\0';
			c1[i] = '\0';
		}
		scanf("%s", card);
		
	}

	return 0;
}
