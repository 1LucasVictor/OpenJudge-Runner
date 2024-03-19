#include <stdio.h>
int main(void) {
	int n, a, count=0, max=-1000000, min=1000000, sum=0;
	scanf("%d", &n);
	while(count<n){
		count++;
		scanf("%d", &a);
	    sum+=a;
	    if(max<a){
	    	max=a;
	    }
	    if(min>a){
	    	min=a;
	    }
	}
	printf("%d %d %d\n", min, max, sum);
	return 0;
}

