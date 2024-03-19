#include <stdio.h>

int main(){
	int i,n;
	scanf("%d",&n);
	int r[n],minv[n],maxv[n],Max=-1000000000;
	for(i=0;i<n;i++){
		scanf("%d",&r[i]);
    }

	minv[0]=r[0];
	maxv[0]=r[n-1];
	for(i=1;i<n-1;i++){
		minv[i] = r[i]<minv[i-1]?r[i]:minv[i-1];
		maxv[i] = r[n-1-i]>maxv[i-1]?r[n-1-i]:maxv[i-1];
	}
	for(i=0;i<n-1;i++){
		Max = maxv[n-2-i]-minv[i]>Max?maxv[n-2-i]-minv[i]:Max;
	}
	printf("%d\n", Max);

	return 0;
}