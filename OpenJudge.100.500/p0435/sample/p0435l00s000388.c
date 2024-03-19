#include<stdio.h>
#include<math.h>

int main(void){
	int i, n, x[200000], y[200000];
	int count;
	int d;
	double dist;
	
	count=0;
	scanf("%d %d", &n, &d);
	for(i=0; i<n; i++){
		scanf("%d %d", &x[i], &y[i]);
    }
	for(i=0; i<n; i++){
		dist=sqrt((double)x[i]*x[i]+(double)y[i]*y[i]);
		if(dist <= d) count++;
	}
	printf("%d", count);
	return 0;
}