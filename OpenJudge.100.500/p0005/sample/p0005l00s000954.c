#include <stdio.h>
#include <string.h>

int main(void){
	char str[21], tmp[21];
	int i, len;
	
	scanf("%s", tmp);
	
	len = strlen(tmp);
	
	for (i = 0; i < len; i++){
		str[i] = tmp[len-i-1];
		printf("%c", str[i]);
	}
	printf("\n");
	
	return 0;
}