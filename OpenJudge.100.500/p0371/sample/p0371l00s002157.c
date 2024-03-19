#include<stdio.h>

int main(){
	int a[10000], n, i, sum=0, max=0, min=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	max = a[0];
	min = a[0];
	
	for(i=1;i<n;i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	
	for(i=1;i<n;i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	
	for(i=0;i<n;i++){
		sum = sum + a[i];
	}
	
	printf("%d %d %d\n", min, max, sum);
	return 0;
}