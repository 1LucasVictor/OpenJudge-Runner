#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void){
	int N;
	char str[1000];
 
	fgets(str, sizeof(str), stdin);
	N=atoi(strtok(str," "));
	
	N=N%10;

	if(N == 3){
		printf("bon\n");
	}else if( (N == 0) || (N == 1) || (N == 6) || (N == 8) ){
		printf("pon\n");
	}else{
		printf("hon\n");
	}
	return 0;
}