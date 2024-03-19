#include <stdio.h>

int main(){
	int point[4], k;

	for(int i = 0; i <= 4; i++){
		scanf("%d", &point[i]);
	}

	scanf("%d", &k);

	for(int i = 0; i <= 4; i++){
		for(int j = 0; j <= 4; j++){
			if(point[j] - point[i] > k && point[j] - point[i] < -k){
				printf(":(\n");
				return 0;
			}
		}
	}

	printf("Yay!\n");

	return 0;
}