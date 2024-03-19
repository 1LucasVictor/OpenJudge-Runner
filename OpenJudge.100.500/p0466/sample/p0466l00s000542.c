#include <stdio.h>
#include <string.h>

int main(){
	char S[10], T[11];

	scanf("%s", S);
	scanf("%s", T);

	if(strlen(S)==strlen(T)-1 && strncmp(S, T, strlen(S))==0) printf("Yes");
	//if(strstr(T, S) != NULL) printf("Yes");
	else printf("No");

	return 0;
}
