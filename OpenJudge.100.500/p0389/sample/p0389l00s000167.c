#include<stdio.h>
#include<string.h>

int main(){

	int m, h[200] = {0}, rgst[200] = {0}, end[200] = {0}, i, j;
	char c[300];
	size_t len;

	end[0] = '-';

	while(1){
		scanf("%s", c);
		if(strcmp(c, end) == 0){
			break;
		}
		scanf("%d", &m);
		for(i = 0; i < m; i++){
			scanf("%d", &h[i]);
		}

		len = strlen(c);

		for(i = 0; i < m; i++){
			for(j = 0; j < len; j++){
				rgst[j] = c[j];
			}

			for(j = 0; j < len - h[i]; j++){
				c[j] = c[j + h[i]];
			}

			for(j = 0; j < h[i]; j++){
				c[len - h[i] + j] = rgst[j];
			}
		}

		printf("%s\n", c);

	}
	
	return 0;
}