#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	char c[2];
	int num;
	int card[4][13] = {0};
	int acsec_key;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%s %d", c, &num);
		//printf("%s\n", c);
		switch (c[0]) {
			case 'S':
				acsec_key = 0;
				//printf("s\n");
				break;
			case 'H':
				acsec_key = 1;
				//printf("h\n");
				break;
			case 'C':
				acsec_key = 2;
				//printf("c\n");
				break;
			case 'D':
				acsec_key = 3;
				//printf("d\n");
				break;
		}
		card[acsec_key][num - 1] = 1;
	}
	
	//printf("\n");
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (card[i][j] == 0) {
				switch (i) {
					case 0:
						c[0] = 'S';
						break;
					case 1:
						c[0] = 'H';
						break;
					case 2:
						c[0] = 'C';
						break;
					case 3:
						c[0] = 'D';
						break;
				}
				printf("%s %d\n", c, j + 1);
			}
		}
	}
	
	
	return 0;
}
