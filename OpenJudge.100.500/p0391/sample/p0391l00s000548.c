#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int SIZE = 1000;

void print(char *str)
{
	int begin, end;

	scanf("%d %d", &begin, &end);
	for(int i = begin;  i <= end; i++) {
		putchar(str[i]);
	}
	putchar('\n');
}

void reverse(char *str)
{
	int begin, end;
	char tmp;

	scanf("%d %d", &begin, &end);
	for(int i = begin, j = end; i < j; i++, j--) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

void replace(char *str)
{
	int begin, end;
	char c;
	char pattern[SIZE+1];

	scanf("%d %d", &begin, &end);
	scanf("%s",  pattern);

	for(int i = begin; i <= end; i++) {
		str[i] = pattern[i-begin];
	}
}

int main()
{
	const int LEN = 10;

	char buf[SIZE + 1];
	char cmd[LEN + 1];
	int q;

	scanf("%s", buf);
	scanf("%d", &q);
	for(int i = 0; i < q; i++) {
		scanf("%s", cmd);
		if(strcmp("replace", cmd) == 0) {
			replace(buf);
		} else if(strcmp("print", cmd) == 0) {
			print(buf);
		} else if(strcmp("reverse", cmd) == 0) {
			reverse(buf);
		}
	}

	return 0;
}