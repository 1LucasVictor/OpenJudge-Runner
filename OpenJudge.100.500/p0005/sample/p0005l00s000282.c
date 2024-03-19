#include<stdio.h>
#include<string.h>

int main(void){
	char str[20];
	int i;
	
	scanf("%s", str);
	int len = strlen(str);
	
	for(i = 0; i < len / 2; i ++){
		char tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
	printf("%s", str);
	return 0;
}