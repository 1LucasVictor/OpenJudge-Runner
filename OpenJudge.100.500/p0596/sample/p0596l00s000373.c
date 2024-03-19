#include <stdio.h>
#include <string.h>

int main() {
	int i, cnt_zero, cnt_one;
	char s[100000];
	
	scanf("%s", &s);

	cnt_zero = 0;
	cnt_one = 0;
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == '0') cnt_zero++;
		else cnt_one++;
	}
	printf("%d", 2 * ((cnt_zero < cnt_one) ? cnt_zero : cnt_one));
	return 0;
}