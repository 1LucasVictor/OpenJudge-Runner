#include<stdio.h>
#include<string.h>

int main(void) {

	char code[200];
	char temp[200];
	int times;
	int i, j, h, k;

	while (1) {
		i = 0;
		scanf("%s", code);
		scanf("%d", &times);
		if(code[0]=='-')break;

		while (i++ < times) {
			j = 0;
			scanf("%d", &h);
			strcpy(temp, code);
			while (code[h] != '\0') {
				code[j++] = code[h++];
			}
			k = 0;
			while (code[j] != '\0') {
				code[j++] = temp[k++];
			}
		}
		printf("%s\n", code);
	}

	return 0;
}