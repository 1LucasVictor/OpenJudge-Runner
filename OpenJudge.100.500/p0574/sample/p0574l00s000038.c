#include<stdio.h>
#include<string.h>

int main(){
	char S[5];

	scanf("%s",S);
	if(strncmp(&S[0],&S[1],1)==0){
		printf("Bad");
	}else if(strncmp(&S[1],&S[2],1)==0){
		printf("Bad");
	}else if(strncmp(&S[2],&S[3],1)==0){
		printf("Bad");
	}else{
		printf("Good");
	}

	return 0;

}