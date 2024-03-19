#include <stdio.h>
#include <string.h>

int main() {
	char lomba[100];
	
	scanf("%s", &lomba);
	
	if(strcmp(lomba,"ABC")==0){
		printf("ARC");
	}
	
	else if(strcmp(lomba,"ARC")==0){
		printf("ABC");
	}
	
	return 0;
}