#include <stdio.h>

int main(void){
	int n,i;
	int max,min,sum;
	sum = 0;
	max = -1000000;
	min = 1000000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		if(a>max) max = a;
		else if(a<min) min = a;
		sum += a;
	}
	printf("%d %d %d\n",min,max,sum);
	return 0;
}