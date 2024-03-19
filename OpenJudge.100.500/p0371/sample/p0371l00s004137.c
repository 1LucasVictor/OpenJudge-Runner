#include <stdio.h>

int main(void) {

	int n,i,max=-1000000,min=1000000;

	int a[10000];

	long long int sum=0;

	scanf("%d",&n);

	for(i=0;i<n;i++){

		scanf("%d",&a[i]);

		if(a[i]>max)

			max=a[i];
		if(a[i]<min)

			min=a[i];

		sum+=a[i];

	}
 
	printf("%d %d %lld\n",min,max,sum);



	return 0;

}

