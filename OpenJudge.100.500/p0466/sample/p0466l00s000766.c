#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {

	char S[10];
	char T[11];
	int i, f = 0;
	scanf("%s", S);
	scanf("%s", T);
	

	for (i = 0; S[i] != '\0'; i++) {
		if (S[i] != T[i]) {
			f = 1;
			break;
		}
	
	} 
	T[i] = '\0';	
	if (f == 0) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;

}