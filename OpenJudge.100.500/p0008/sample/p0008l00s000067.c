#include <stdio.h>

#define MUN 1000001
int p[MUN];

int main(void)
{
	int n;
	int i, j;
	
	for (i = 2; i < MUN; i++){
		p[i] = 1;
	}
	
	for (i = 2; i * i < MUN; i++){
		if (p[i] == 1){
			for (j = i * i; j < MUN; j += i){
				p[j] = 0;
			}
		}
	}
	
	for (i = 1; i < MUN; i++){
		p[i + 1] += p[i];
	}
	
	while (scanf("%d", &n) != EOF){
		printf("%d\n", p[n]);
	}
	return (0);
}