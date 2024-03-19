#include <stdio.h>
int main(void) {
	int a, b;
	int i = 0 , buf;
	
	while (scanf("%d %d", &a, &b) != EOF){
		i = 0;
		buf = a + b;
		while (1){
			i++;
			buf = buf / 10;
			if (buf == 0) break;
		}
		printf("%d\n", i);
	}
	

	return 0;
}