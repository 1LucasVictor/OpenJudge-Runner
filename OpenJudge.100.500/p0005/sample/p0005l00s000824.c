#include <stdio.h>

int main(void){
	char input[20];
	int str;
	int i;
	for(i = 0 ; i < 20 ; i++)
		input[i] = '\0';

	scanf("%s", input);

	for(i = 20 ; i > 0 ; i--){
		if(input[i-1] != '\0') printf("%c", input[i-1]);
	}
	puts("");

}