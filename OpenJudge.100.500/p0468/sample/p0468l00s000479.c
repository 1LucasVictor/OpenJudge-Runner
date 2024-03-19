#include<stdio.h>
int main(){
	char str[10];
	scanf("%s", str);
	if(str[1] == 'B')
		printf("ARC");
	else
		printf("ABC");
	return 0;
}