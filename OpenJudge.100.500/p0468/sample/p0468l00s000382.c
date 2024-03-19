#include<stdio.h>
#include<stdlib.h>
int main(void) {
	char S[4]; char B[4]="ABC";
	
	scanf("%s", &S);
	if (strcmp(B, S)==0) {
		printf("ARC");
	}
	else {
		printf("ABC");
	}
	return 0;
}