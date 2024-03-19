#include<stdio.h>
int main(void){
	int i,j;
	char str[20];
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++){
	}
	for(j=i-1;j>=0;j--){
		printf("%c",str[j]);
	}
	printf("\n");
	return 0;
} 
