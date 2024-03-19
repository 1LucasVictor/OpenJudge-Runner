#include <stdio.h>
#include <string.h>
int main(void)
{
	char S[3],B[] = "ABC",R[] = "ARC";
	scanf("%s",S);
	if(strcmp(S,B) == 0){
		printf("ARC");
	}else if(strcmp(S,R) == 0){
		printf("ABC");
	}
	return 0;
}