#include<stdio.h>
int main(void)
{
	int n, i, a[10000];
	int min, max, sum=0;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(i==0){
		min = a[0];
		max = a[0];
		}
		sum+=a[i];
		if(min>=a[i]){
			min = a[i];
		}
		if(max<=a[i]){
			max = a[i];
		}
	}
	
	printf("%d %d %d\n", min, max, sum);
	
	return 0;
}