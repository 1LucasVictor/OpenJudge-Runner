#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {
	char buff[64];
	int n;
	int result;
	
	while (fgets (buff, 64, stdin)) {
		sscanf (buff, "%d", &n);

		result = 0;
		for (int a = 0; a < 10; a++) {
			for (int b = 0; b < 10; b++) {
				for (int c = 0; c < 10; c++) {
					for (int d = 0; d < 10; d++) {
						if ((a + b + c + d) == n) {
							result++;
						}
					}
				}
			}
		}
		printf ("%d\n", result);
	}
	
	return 0;
}

