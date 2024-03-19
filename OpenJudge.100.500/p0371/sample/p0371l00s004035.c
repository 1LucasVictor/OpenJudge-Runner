#include <stdio.h>

main(void)
{
	int a,n,i,min,max,sum;
	
	min=1000000;
	max=-1000000;
	sum=0;
	a=0;
	
	scanf("%11d",&n);
	
	for(a=0;a<n;a++){
		scanf("%d",&i);
		if(i<min) min=i;
		if(i>max) max=i;
		sum+=i;
	}
	printf("%d %d %d\n",min,max,sum);
	
	return 0;
}