#include "stdio.h"

int main(){

	int i;
	char s,a[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (s != '\n') {
		scanf("%c", &s);
		for (i = 0; i < 52; i++) 
			if (a[i] == s) {
				s = a[(i + 26) % 52];
				break;
			}	
		printf("%c", s);
	} 
	return 0;
}
