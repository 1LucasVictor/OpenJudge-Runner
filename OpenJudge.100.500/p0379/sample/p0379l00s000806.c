#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void){
	char input[50];
	int n, m;
	int i, j;
	int *vectorA;
	int *vectorb;
	int *vectorc;
	fgets(input, sizeof(input), stdin);
	n = atoi(strtok(input, " "));
	m = atoi(strtok(NULL, " "));
	vectorA = (int *)malloc(sizeof(int) * n * m);
	vectorb = (int *)malloc(sizeof(int) * m);
	vectorc = (int *)malloc(sizeof(int) * n);
	for (j = 0; j < n; j++){
		fgets(input, sizeof(input), stdin);
		for (i = 0; i < m; i++){	
			if(i == 0){
				vectorA[j * m + i] = atoi(strtok(input, " "));
			}else{
				vectorA[j * m + i] = atoi(strtok(NULL, " "));
			}
		} 	
	}
 
	for (i = 0; i < m; i++){
		fgets(input, sizeof(input), stdin);
		vectorb[i] = atoi(input) ;
	}

	for (j = 0; j < n; j++){
		for (i = 0; i < m; i++){	
				vectorc[j] += vectorA[j * m + i] * vectorb[i];
		} 	
	}
 
	for (j = 0; j < n; j++){
		printf("%d\n", vectorc[j]);
	}
	return 0;
}