#include<stdio.h>

int main() {
	char str[21];
	char *st, *en;
	char tmp;
	
	scanf("%s", str);
	
	st = str;
	en = str;
	while(*en != '\0') { ++en; }
	--en;

	while(st < en) {
		tmp = *st;
		*st = *en;
		*en = tmp;

		++st;
		--en;
	}

	printf("%s\n", str);
	
	return 0;
}