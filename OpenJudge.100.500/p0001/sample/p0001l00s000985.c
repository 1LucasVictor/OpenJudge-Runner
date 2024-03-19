#include <stdio.h>
int main(){
	int varA[3] = {0}, varB[3] = {0};
	int varSum[3] = {0};
	int varDigit[3] = {0};
	int comp = 1;
	int i = 0, j = 0;
	while(i < 3){
		scanf("%d%d",&varA[i],&varB[i]);
		varSum[i] = varA[i] + varB[i];
		i++;
	}
	for(j = 0; j < 3; j++){
		comp = 1;
		for(i = 0; i < 10; i++){
			comp *= 10;
			varDigit[j]++;
			if((varSum[j] % comp) == varSum[j]){
				break;
			}
		}
	}
	printf("%d\n%d\n%d\n",varDigit[0],varDigit[1],varDigit[2]);
	return 0;
}