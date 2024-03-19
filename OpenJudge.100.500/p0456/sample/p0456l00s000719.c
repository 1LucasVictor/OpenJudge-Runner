#include<stdio.h>

int main(void){
	char S[200],T[200];
	int i=0,count=0;
	scanf("%s",S);
	scanf("%s",T);

	for(i=0;S[i] != '\0';i++){
		if(S[i] != T[i]){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}