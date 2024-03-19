#include <stdio.h>

int main(){
	int point[4], k;
	int i, j;

	for(i = 0; i < 5; i++){
		scanf("%d", &point[i]);
	}

	scanf("%d", &k);

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(point[i] - point[j] > k){
				printf(":(\n");
				return 0;
			}
		}
	}

	printf("Yay!\n");

	return 0;
}