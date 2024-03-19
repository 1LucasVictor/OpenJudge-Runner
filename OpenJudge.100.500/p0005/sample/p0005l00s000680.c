#include<stdio.h>
#include<string.h>
#define MAX 21
char str[MAX];
int main() {
	int len;
	char temp;
	scanf("%s",str);
	len = strlen(str);
	for (int i = 0;i < len / 2;i++) {
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
	printf("%s\n",str);
}