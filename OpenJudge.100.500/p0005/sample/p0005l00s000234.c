#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	scanf("%s",&str);
	int l=strlen(str);
	for(;l>0;l--)printf("%c",str[l-1]);
	printf("\n");
	return 0;

}