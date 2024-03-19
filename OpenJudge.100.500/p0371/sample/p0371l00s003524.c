#include<stdio.h>

int main(void){

	int n,a,i;
	int max=-1000000,min=1000000;
	long int sum = 0;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&a);

		if(max < a)
			max = a;
		if(min > a)
			min = a;

		sum += a;

	}

	printf("%d %d %d\n",min,max,sum);

	return 0;

}