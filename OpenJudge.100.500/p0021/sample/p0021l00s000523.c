#include <stdio.h>
#define N 5000

int main(void){
	int max, sum, a[5000], n, i, j, k;
	
	while(scanf("%d",&n), n!=0){
		max=0;
		for(i=0; i<n; i++) scanf("%d",&a[i]);
		for(i=0; i<n-1; i++) for(j=n-1; j>i; j--){ /* ツ氾債暗債づーツ陛渉可サ */
			sum=0;
			for(k=i; k<=j; k++) sum+=a[k];
			if(sum>max) max=sum;
		}
		printf("%d\n",max);
	}
	
	return 0;
}