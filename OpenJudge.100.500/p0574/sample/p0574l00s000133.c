#include <stdio.h>

int main(void){

	char s[4];
	scanf("%s",&s);

	for(int i = 0;i < 2;i++) if(s[i] == s[i+1]) {
		printf("Bad");
		return 0;
	}
	printf("Good");

	return 0;
}
