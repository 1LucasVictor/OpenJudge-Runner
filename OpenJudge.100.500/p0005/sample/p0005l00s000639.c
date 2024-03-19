#include <stdio.h>
#include <string.h>

int main(void){
	char str[25] = {0}, afstr[25] = {0};
	int i, j = 0;

	scanf("%s", str);
	
	for(i = strlen(str) - 1;i >= 0;i--){
		afstr[j] = str[i];
		j++;
	}
	
	printf("%s\n", afstr);
	
	return 0;
}