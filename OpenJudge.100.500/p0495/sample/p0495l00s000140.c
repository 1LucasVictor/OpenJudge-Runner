#include <stdio.h>
#include <string.h>

int main(void){
	char input[3];

	scanf("%s", input);
	if(strcmp(input, "AAA") && strcmp(input, "BBB")){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

	return 0;
}