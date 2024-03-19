#include <stdio.h>

int main(){
	char S[4];
	scanf ("%s",&S);
	if (S[0]!=S[1] || S[0] != S[2]){
		puts ("Yes");
	}
	else{
		puts ("No");
	}
	return 0;
}