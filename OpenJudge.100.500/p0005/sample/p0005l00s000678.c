#include <stdio.h>

int main(void){

	char str[20];
	int i, j;

	scanf("%s",str);

	for(i=0; i<=20; i++){
		if(str[i] == '\0'){
			break;
		}
	}
	i = i - 1;

	for(j=i; j>=0; j--){
		printf("%c",str[j]);
	}
	printf("\n");
	return 0;
}