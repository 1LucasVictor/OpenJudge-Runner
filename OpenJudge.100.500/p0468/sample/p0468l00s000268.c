#include <stdio.h>
#include <string.h>

int main(){
	char S[3];
  	scanf("%s",S);
  
  	if((strcmp(S,"ABC")) == 0) printf("ARC");
  	if((strcmp(S,"ARC")) == 0) printf("ABC");
}