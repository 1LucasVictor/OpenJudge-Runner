#include <stdlib.h>
#include <stdio.h>

int main(){
	int n;
	int *data = NULL;
	scanf("%d", &n);
	int i;
	int min, max, sum;
	data = (int *)malloc(sizeof(int) * n);
	
	for(i=0; i<n; i++){
		scanf("%d", &data[i]);
	}
	
	for(i=0; i<n; i++){
		if(i==0){
			min = data[i];
			max = data[i];
			sum = data[i];
		}
		else{
			if(min > data[i]){
				min = data[i];	
			}
			else if(max < data[i]){
				max = data[i];
			}
			sum = sum + data[i];
		}
	}

	printf("%d %d %d\n", min, max, sum);

	free(data);
	return 0;

}
