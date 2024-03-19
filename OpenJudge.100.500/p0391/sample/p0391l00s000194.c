#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int main(void) {
	int n;
	char str[1001] = "";
	char command[10] = "";
	char command_word1[10] = "print";
	char command_word2[10] = "reverse";
	char command_word3[10] = "replace";

	char replace[1000] = "";

	scanf("%s", str);
	scanf("%d", &n);
	

	for (int i = 0; i < n; i++) {
		scanf("%s", command);

		if (strcmp(command, command_word1) == 0) {
			//print
			int start, end;
			scanf("%d %d", &start, &end);

			for (; start <= end; start++) {
				printf("%c", str[start]);
			}
			printf("\n");
		}

		else if (strcmp(command, command_word2) == 0) {
			//reverse
			int start, end;
			char temp;
			scanf("%d %d", &start, &end);

			for (; start <= end; start++, end--) {
				temp = str[start];
				str[start] = str[end];
				str[end] = temp;
			}
		}

		else if (strcmp(command, command_word3) == 0) {
			//replace
			int start, end;
			scanf("%d %d %s", &start, &end, replace);

			for (int j = 0; start <= end; j++, start++) {
				str[start] = replace[j];
			}
		}
	}
	return 0;
}
