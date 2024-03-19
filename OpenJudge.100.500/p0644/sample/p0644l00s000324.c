#include <stdio.h>
#include <math.h>
#include <string.h>
#define pai 3.1415926535

	int main(void) {
		char s1, s2, s3;
		scanf("%c%c%c", &s1, &s2, &s3);
		int count = 0;
		if (s1 == '1') {
			count++;
		}
		
		if (s2 == '1') {
			count++;
		}
		
		if (s3 == '1') {
			count++;
		}
		printf("%d", count);


		return 0;
}
	