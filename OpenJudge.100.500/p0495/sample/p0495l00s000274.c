#include<stdio.h>

int main(void){
	char S[4];
	scanf("%s", S);

	if (S[0] == S[1] && S[1] == S[2]){
		printf("No");
	}
	else{
		printf("Yes");
	}
}