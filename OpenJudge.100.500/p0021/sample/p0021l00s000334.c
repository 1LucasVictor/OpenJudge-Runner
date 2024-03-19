#include <stdio.h>
#define N 5000

int main(void){
	int max, sum, a[5000], n, i, j;
	
	while(scanf("%d",&n), n!=0){
		max=0;
		for(i=0; i<n; i++) scanf("%d",&a[i]);
		for(i=0; i<n; i++){ /* ツ氾債暗債づーツ陛渉可サ */
			sum=0;
			for(j=i; j<n; j++){
				sum+=a[j];
				if(sum>max) max=sum;
			}
		}
		printf("%d\n",max);
	}
	
	return 0;
}