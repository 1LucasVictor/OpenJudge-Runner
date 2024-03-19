#include <stdio.h>
#include <string.h>
int main(void) {
	int m, h = 0;
	int b, i;
	char str[201];
	while(scanf("%s",&str)){
		if(!strcmp(str, "-")){
			break;
		}
		scanf("%d", &m);
		for(i = 0; i < m; i++){
			scanf("%d", &b);
			h = h + b;
		}
		h %= strlen(str);
		for(i = h; i < strlen(str)+h; i++){
			printf("%c",str[i%strlen(str)]);
		}
		printf("\n");
	}
    return 0;
}
