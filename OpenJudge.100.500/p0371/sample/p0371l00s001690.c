#include <stdio.h>

int main(void) {
	int n=0,i,j=0;
	int tmp,ALL=0;
	int max,min;

	
	scanf("%lld",&n);
	
	long long int a[n];
	
	for(i=0;i<n;i++){
		scanf("%ld",&a[i]);
		ALL += a[i];
	}
	
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i] < a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			
			}
		}
	}
	min = a[n-1];
	
	printf("%d %lld %d\n",min,a[0],ALL);
	return 0;
}