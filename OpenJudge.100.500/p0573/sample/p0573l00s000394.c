#include<stdio.h>
#include<string.h>

int main(){
	char S[5];
	scanf("%s",S);

	if(strncmp(&S[0],&S[1],1)==0){
		if(strncmp(&S[2],&S[3],1)==0){
			if(strncmp(&S[1],&S[2],1)==0){
				printf("No");
			}else{
				printf("Yes");
			}
		}else{
			printf("No");
		}
	}else if(strncmp(&S[0],&S[2],1)==0){
		if(strncmp(&S[1],&S[3],1)==0){
			printf("Yes");
		}else{
			printf("No");
		}
	}else if(strncmp(&S[0],&S[3],1)==0){
		if(strncmp(&S[1],&S[2],1)==0){
			printf("Yes");
		}else{
			printf("No");
		}
	}else{
		printf("No");
	}

	return 0;
}