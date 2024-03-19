#include <stdio.h>

int main(void) {
	int i=0;
	char str[80];
	
	scanf("%s", str);
	
	while (str[i] != '\0' || i>=80)  i++;
	
	i--;
	while (i>=0) {
		putchar(str[i]);
		i--;
	}
	
	return 0;
}