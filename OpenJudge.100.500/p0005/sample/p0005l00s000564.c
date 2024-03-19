#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int length;
	int i;
	scanf("%s",&str);
	length = strlen(str);
	for(i=length-1;i>=0;i--){
		printf("%c",str[i]);
	}
	return 0;
}