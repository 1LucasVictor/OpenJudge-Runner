#include <stdio.h>
int main (){
	char S[100];
	scanf("%s",S);
	if (S[1]=='B'){
		S[1]='R';
		printf("%s", S);
	}
	else if (S[1]=='R') {
		S[1]='B';
		printf("%s", S);
	}
	
return 0;
}
