#include <stdio.h>

int main(void) {
	char b;
	int n = 0;
	
	while(scanf("%c", &b) != EOF){
		if(b == '\n') {
			if(n == 0) break;
			printf("%d\n", n);
			n = 0;
		}
		else{
			n += b - '0';
		}
	}
	return 0;
}