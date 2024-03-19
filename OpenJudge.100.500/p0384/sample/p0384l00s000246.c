#include<stdio.h>
#include<string.h>

int main(void) {

	char i_str[1200];
	int i, len;
	fgets(i_str, 1200, stdin);
	len = strlen(i_str);
	for(i=0;i<len;i++) {
		if ((i_str[i] >= 'A') && (i_str[i] <= 'Z')) {
			printf("%c", i_str[i] + 0x20);
		} else if ((i_str[i] >= 'a') && (i_str[i] <= 'z')) {
			printf("%c", i_str[i] - 0x20);
		} else {
			printf("%c", i_str[i]);
		}
	}

	return 0;
}