#include<stdio.h>

int main(void) {
	int i;
	char s[1201];
	
	
	fgets(s, sizeof(s), stdin);
	
	for(i = 0; i < strlen(s); i++) {
		if(s[i] >= 65 && s[i] <= 90) {
			s[i] += 32;
		} else if(s[i] >= 97 && s[i] <= 122) {
			s[i] -= 32;
		}
	}
	
	
	
	printf("%s", s);
	
	return 0;
}