#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, n, m, h;
	char N[201], Nw[201];
	
	while(1){
		scanf("%s", N);
		n = strlen(N);
		if(!strcmp(N, "-")) break;
		scanf("%d", &m);
		for(i = 0; i < m; i++){
			scanf("%d", &h);
			memcpy(Nw, N, h);
			memcpy(N, &N[h], n-h);
			memcpy(&N[n-h], Nw, h);
		}
		printf("%s\n", N);
	}
	
	return(0);
}

