/* ITP1_9_B: Shuffle */
/* 20181124 AOJ */

#define _CRT_SECURE_NO_WARNINGS
#define N 201
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[N], str2[N];
	int m, h, i, j, len_str1;

	i = 0;
	while(1) {
		scanf("%s", str1);
		if(str1[0] == '-') break;
		len_str1 = strlen(str1);
		scanf("%d", &m);
		for(i = 0; i < m; i++) {
			scanf("%d", &h);
			for(j = h; str1[j]; j++) {
				str2[j - h] = str1[j];
			}
			str2[len_str1 - h] = '\0';
			strncat(str2, str1, h);
			strcpy(str1, str2);
			//str2[len_str1] = '\0';
		}

		printf("%s\n", str1);
	}

	return 0;
}
