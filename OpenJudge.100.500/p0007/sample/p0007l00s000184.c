#include <stdio.h>

int main(void)
{
	int i=0, z, j, s, t;
	int n[100000];
	int count[100000];
	int dd=0;
	
	while (scanf("%d", &n[i]) != EOF){
		i++;
		dd++;
	}
	
	for (i=0; i<dd; i++){
		for (z=0; z<=9; z++){
			for (j=0; j<=9; j++){
				for (s=0; s<=9; s++){
					for (t=0; t<=9; t++){
						if ((z+j+s+t) == n[i]){
							count[i]++;
						}
					}
				}
			}
		}
	}
	
	for (i=0; i<dd; i++){
		printf("%d\n", count[i]);
	}
	
	return 0;
}