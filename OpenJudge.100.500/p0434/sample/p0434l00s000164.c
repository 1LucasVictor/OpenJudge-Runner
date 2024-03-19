#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void){
	int X;
	char str[1000];
 
	fgets(str, sizeof(str), stdin);
	X=atoi(strtok(str," "));

	if(X >= 30){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

	return 0;
}