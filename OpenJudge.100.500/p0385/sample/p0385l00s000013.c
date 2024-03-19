#include <stdio.h>
#include <string.h>

int main(void) {
	
	char x[1001] = { 0 };

	while (1) {
		
		int sum = 0;
		scanf("%s", x);
		if (x[0] == '0')
			break;

		for (int i = 0; i < strlen(x); i++) {
			sum += x[i] - '0';
		}

		printf("%d\n", sum);
			
	}

	return 0;
}


