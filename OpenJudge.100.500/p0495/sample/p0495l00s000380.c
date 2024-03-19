#include <stdio.h>
int main(void){
	char S[3];
	int i;		
	scanf("%c%c%c",&S[0],&S[1],&S[2]);

	
	if((S[0] == S[1] && S[0] != S[2]) || (S[0] == S[2] && S[0] != S[1]) || (S[1] == S[2] && S[1] != S[2])){
		puts("Yes");
	}else{
		puts("No");
	}
	
	
	return 0;
}