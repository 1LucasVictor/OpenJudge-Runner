/* ITP1_9_D:Transformation */
/* 20181124 AOJ */

#define _CRT_SECURE_NO_WARNINGS
#define N 8
#define M 1001
#include <stdio.h>
#include <string.h>

void print(char *str, int a, int b);
void replace(char *str, char *temp, int a, int b);
void reverse(char *str, int a, int b);

int main(void) {
	int i, n, a, b;
	char cmd[N], str[M], temp[M];

	scanf("%s", str);
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%s", cmd);
		
		if(strcmp(cmd, "print") == 0) {
			scanf("%d %d", &a, &b);
			print(str, a, b);
		}else if(strcmp(cmd, "reverse") == 0) {
			scanf("%d %d", &a, &b);
			reverse(str, a, b);
		}else if(strcmp(cmd, "replace") == 0) {
			scanf("%d %d %s", &a, &b, temp);
			replace(str, temp, a, b);
		}else {
		
		}
	}

	return 0;
}

void print(char *str, int a, int b) {
	int i;
	
	for(i = a; i <= b; i++) printf("%c", str[i]);
	printf("\n");
}

void replace(char *str, char *temp, int a, int b) {
	int i;

	for(i = a; i <=b; i++) {
		str[i] = *(temp++);
	}
}
void reverse(char *str, int a, int b) {
	int i, j;
	char temp;

	i = a;
	j = b;
	while(i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

