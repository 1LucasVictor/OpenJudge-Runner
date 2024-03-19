#include<stdio.h>
int main(void){
	int i=0,l;
	char s[20];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++);
	for(i--;i>=0;i--){
		printf("%c",s[i]);
	}
	printf("\n");
	return 0;
}
