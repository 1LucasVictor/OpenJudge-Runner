#include <stdio.h>

#define MN 1000001

int main(void)
{
	int n;
	int i, j;
	int pn[MN];
	
	for (i = 0; i < MN; i++){
		pn[i] = 1;
	}
	
	pn[0] = pn[1] = 0;
	
	for (i = 2; i * i < MN; i++){
		if (pn[i] == 1){
			for (j = i * i; j < MN; j += i){
				pn[j] = 0;
			}
		}
	}
	
	for (i = 1; i < MN - 1; i++){
		pn[i + 1] += pn[i];
	}
	
	while (scanf("%d", &n) != EOF){
		printf("%d\n", pn[n]);
	}
	
	return (0);
}