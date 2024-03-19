/*
 * main.c
 *
 *  Created on: 2020/07/28
 *      Author: 113896
 */
#include <stdio.h>
#include <string.h>

#define BSIZE 2000

int main() {

	char buffer[BSIZE];

	int total = 0;
	while (1) {
		fgets(buffer, BSIZE, stdin);
		int length = 0;
		while (buffer[length] != '\0') {
			length++;
		}
		char num[length+1];
		strncpy(num, buffer, length+1);
		if (strcmp(num, "0\n\0") == 0) break;
		total = 0;
		char c;
		for (int i = 0; i < length; i++) {
			c = num[i];
			if (c >= '0' && c <= '9') {
				total += num[i] - '0';
			}
		}
		printf("%d\n", total);
		memset(buffer, '\0', BSIZE * sizeof(char));
	}

	return 0;
}


