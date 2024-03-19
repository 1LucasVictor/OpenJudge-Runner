#include <stdio.h>
#include <string.h>
 
int main(void) {
	char str[200], tmp[200] = {};
	int m, h, slen;
	int i, j;
	
	while (scanf("%s", str), str[0] != '-'){	
		slen = strlen(str);
		
		scanf("%d", &m);
		
		for (i = 0; i < m; i++){
			scanf("%d", &h);
			for (j = 0; j < h; j++)	tmp[j] = str[j];
			for (j = 0; j < slen - h; j++) str[j] = str[j+h];
			for (j = 0; j < h; j++) str[slen-1 - j] = tmp[h-1 - j];
		}
		printf("%s\n", str);
	}
		
	return 0;
}