#include <stdio.h>

int main(void) {
	int x,k, a[10000] = {0};
	int max = -10001, min = 10001, sum = 0;
	scanf("%d", &k);
	
	
	for(x=0;x<k;x++){
		scanf("%d",&a[x]);
		if(a[x]>max) max=a[x];
		if(a[x]<min) min=a[x];
		sum+=a[x];
	}
	
	printf("%d %d %d\n", min, max, sum);
	
	
	return 0;
}