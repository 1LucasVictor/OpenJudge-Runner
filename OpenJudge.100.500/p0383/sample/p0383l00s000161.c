#include <stdio.h>
#include <stdlib.h>

int main(void){
	int data[3];
	int *a, *b, *ans;
	int i, j, k;
	int size_input;
	int size_output;
	
	scanf("%d %d %d", &data[0], &data[1], &data[2]);
	size_input = data[0] * data[1];
	size_output = data[0] * data[2];
	
	a = malloc(sizeof(int) * size_input);
	b = malloc(sizeof(int) * size_input);
	ans = malloc(sizeof(int) * size_output);
	
	for(i=0 ; i<size_input ; i++) {
		scanf("%d",&a[i]);
	}

	for(i=0 ; i<size_input ; i++) {
		scanf("%d",&b[i]);
	}

	for(i=0 ; i<data[0] ; i++){
		for(j=0 ; j<data[2] ; j++){
			for(k=0 ; k<data[1] ; k++){
				ans[i*data[2]+j]+=a[i*data[1]+k]*b[k*data[2]+j];
			}
		}
	}

	for(i=0 ; i < size_output ; i++){
		printf("%d", ans[i]);
		if(i % data[2] == data[2] - 1){
			printf("\n");
		}
		else{
			printf(" ");
		}
	}
	
	return 0;
}