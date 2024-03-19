#include <stdio.h>
#include <stdlib.h>

int main(void){
	int data[3];
	int *a, *b, *ans;
	int i, j, k;
	int size_a, size_b;
	int size_output;
	
	scanf("%d %d %d", &data[0], &data[1], &data[2]);
	size_a = data[0] * data[1];
	size_b = data[1] * data[2];
	size_output = data[0] * data[2];
	
	a = malloc(sizeof(int) * size_a);
	b = malloc(sizeof(int) * size_b);
	ans = malloc(sizeof(int) * size_output);
	
	for(i=0 ; i<size_a ; i++) {
		scanf("%d",&a[i]);
	}

	for(i=0 ; i<size_b ; i++) {
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