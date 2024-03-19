#include <stdio.h>
#include <string.h>

int main() {
	char S[10];
	char T[11];

	char say_yes[] = "Yes";
	char say_no[] = "No";

	scanf("%s%s",S,T);
	if(strncmp(S,T,strlen(S)))
		printf("%s",say_no);
	else
		printf("%s",say_yes);
	return 0;
}
