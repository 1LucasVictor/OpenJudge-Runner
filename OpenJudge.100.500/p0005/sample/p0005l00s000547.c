#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char str[200];
	scanf("%s", str);
	for(i = strlen(str)-1;i>=0;i--){
		printf("%c",str[i]);
	}
	puts("");
	return 0;
}