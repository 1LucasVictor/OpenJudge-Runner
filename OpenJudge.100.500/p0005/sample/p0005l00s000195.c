#include <stdio.h>
#include <string.h>

int main(){
	int i, N;
	char str[20];
	scanf("%s", str);

	N =strlen(str);
	for(i=N-1; i>=0; --i){
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}