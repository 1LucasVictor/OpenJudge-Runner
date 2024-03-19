#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char input[19];
	int a, b, c;
	int i;
	int count = 0;
	fgets(input, sizeof(input), stdin);
		
	a = atoi(strtok(input, " "));
	b = atoi(strtok(NULL, " "));
	c = atoi(strtok(NULL, " "));
	
	for (i = a; i <= b; i++){
		if (c % i == 0){
			count++;
		}
	}
	
	printf("%d\n", count);
	return 0;
}