#include <stdio.h>

int main(void) {
	char str[1200], b;
	
	while(scanf("%c", &b) != EOF){
		if(b >= 'A' && b <= 'z') {
			if(b >= 'a') printf("%c",b-32);
			else printf("%c", b + 32);
		}
		else printf("%c", b);
	}
	return 0;
}