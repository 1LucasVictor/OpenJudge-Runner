#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(){
	int i,n;
	scanf("%d",&n);
	int r[n],min[n],max[n],Max=-1000000000;
	for(i=0;i<n;i++){
		scanf("%d",&r[i]);
    }

	min[0]=r[0];
	max[0]=r[n-1];
	for(i=1;i<n-1;i++){
		min[i] = MIN (r[i],min[i-1]);
		max[i] = MAX (r[n-1-i],max[i-1]);
	}
	for(i=0;i<n-1;i++){
		Max = MAX (max[n-2-i]-min[i],Max);
	}
	printf("%d\n", Max);

	return 0;
}