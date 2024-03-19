#include <stdio.h>
#include <string.h>

int main(){
	char S[11], T[12];

	scanf("%s", S);
	scanf("%s", T);

	if(strlen(S)!=strlen(T)-1) printf("No");
	else if(strncmp(S, T, strlen(S))!=0) printf("No");
	//if(strstr(T, S) != NULL) printf("Yes");
	else printf("Yes");

	return 0;
}
