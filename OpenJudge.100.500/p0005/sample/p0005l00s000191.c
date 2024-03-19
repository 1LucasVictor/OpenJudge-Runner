#include<stdio.h>

int main(){
	char str[30];
	int i;
	
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++);
	
	for(i--;i>=0;i--)
		printf("%c",str[i]);
	
	printf("\n");

	return 0;
}