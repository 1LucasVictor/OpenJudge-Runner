#include<stdio.h>

int main(){
	char str[21];
	int A;
	scanf("%s",str);
	for(A=0;str[A];A++);
	for(A--;A>=0;A--)
		printf("%c",str[A]);
	printf("\n");
	return 0;
}