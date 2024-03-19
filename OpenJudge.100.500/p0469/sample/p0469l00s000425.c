#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void){
	int K,A,B,i;
	char str[1000];
 
	fgets(str, sizeof(str), stdin);
	K=atoi(strtok(str," "));

	fgets(str, sizeof(str), stdin);
	A=atoi(strtok(str," "));
	B=atoi(strtok(NULL," "));

	for(i=A;i<B;i++){
		if(i%K ==0) break;
	}
	if( (i<B) || (B%K==0) ){
		printf("OK\n");
	}else{
		printf("NG\n");
	}

	return 0;
}