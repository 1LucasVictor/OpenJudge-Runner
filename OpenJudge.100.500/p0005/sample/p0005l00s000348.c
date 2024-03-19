#include <stdio.h>

int main(void) {
	int i;
	char str[20] = {0};
	while(scanf("%s", str) != EOF){
	for(i=19;i>=0;i--){
		if(str[i] !=0) printf("%c",str[i]);
	}
	printf("\n");
	}
	return 0;
}