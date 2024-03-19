#include<stdio.h>
#include<string.h>

int main(void){
	char S[100],A[100]="AAA",B[100]="BBB";
	scanf("%s",S);
	if(strcmp(S,A)==0 || strcmp(S,B)==0){
		printf("No\n");
	}else{
		printf("Yes\n");
	}
	return 0;
}