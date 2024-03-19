#include <stdio.h>
#include <string.h>

int main (){
	char x[21];
	int j;
	scanf("%s",x);
	for(j=strlen(x)-1;j>=0;j--){
		printf("%c",x[j]);
	}
	printf("\n");
	return 0;
}