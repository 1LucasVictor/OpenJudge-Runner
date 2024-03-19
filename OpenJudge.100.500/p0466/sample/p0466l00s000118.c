#include <stdio.h>
#include <string.h>

int main(void) {
	char s[11], t[11];
	
	scanf("%s", s);
	scanf("%s", t);
	
	if (strlen(s) == strlen(t) - 1) {
		t[strlen(t)-1] = 0;
		if (strcmp(s,t) == 0) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	} else {
		printf("No\n");
	}
	
	return 0;
}