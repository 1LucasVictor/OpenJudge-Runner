#include <stdio.h>
#include <limits.h>
#define N_MAX 5000

int main(void){
	long int max, sum; int a[N_MAX], n, i, j;
	
	while(scanf("%d",&n), n!=0){
		max=INT_MIN;
		
		for(i=0; i<n; i++) scanf("%d",&a[i]);
		
		for(i=0; i<n; i++){ /* ツ氾債暗債づーツ陛渉可サ */
			sum=0;
		
			for(j=i; j<n; j++){
				sum+=a[j];
				if(sum>max) max=sum;
			}
		}
		printf("%ld\n",max);
	}
	
	return 0;
}