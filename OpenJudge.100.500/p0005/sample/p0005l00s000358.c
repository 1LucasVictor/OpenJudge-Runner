#include<stdio.h>

int main(void){
	char c[22];
	int i,j;
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++);
	for(j=0;j<i;j++){
		printf("%c",c[i-j-1]);
	}
	printf("\n");
	return 0;
}