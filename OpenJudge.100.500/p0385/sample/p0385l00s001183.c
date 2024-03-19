#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char str[1001];
	int tmp, i;
	while (1) {
		memset(str, '\0', sizeof(str));
		scanf("%s", str);
		//	printf("%s", str);
		if (atoi(&str[0]) == 0) break;
		tmp = 0;
		for (i = 0; str[i] != '\0'; ++i) {
			tmp += (int)(str[i] - '0');
				//printf("%d\n", tmp);
		}
		printf("%d\n", tmp);
	}

	
	return 0;
}