#include <stdio.h>
#include <string.h>

int main(void) {
	char str[1001], tmp[1001], in[10];
	int q, a, b;
	int i;
	
	scanf("%s", str);
	scanf("%d", &q);
	
	while (q--) {
		scanf("%s %d %d", in, &a, &b);
		if (strcmp(in, "print") == 0) {
			for (i = a; i <= b; i++) putchar(str[i]);
			puts("");
		}
		else if (strcmp(in, "replace") == 0) {
			scanf("%s", tmp);
			strncpy(&str[a], tmp, b - a + 1);
		}
		else {		
			strcpy(tmp, str);
			for (i = 0; i <= b - a; i++) tmp[a + i] = str[b - i];
			strcpy(str, tmp);
		}
	}
	
	return 0;
}