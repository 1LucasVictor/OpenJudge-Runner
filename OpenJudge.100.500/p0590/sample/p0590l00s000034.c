#include <stdio.h>
int main(){
	int a[5],k;
	scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&k);
	int min = a[0];
	int max = a[0];
	for(int i=0;i<5;i++){
		if(max<=a[i]){
			max=a[i];
		}
		if(min>=a[i]){
			min=a[i];
		}
	}
	if(max-min>k){
		printf(":(");
	}
	else{
		printf("Yay!");
	}
	return 0;
}