#include <stdio.h>

main(void)
{
	int a,n,i,min,max,sum;
	
	min=0;
	max=0;
	sum=0;
	
	scanf("%d",&n);
	
	for(a=1;a<=n;a++){
		scanf("%d",&i);
		sum+=i;
		
		if(min==0){
			min=i;
		}
		else if(i<min){
			min=i;
		}
		
		if(max==0){
			max=i;
		}
		else if(max<i){
			max=i;
		}
		
	}
	printf("%d %d %d\n",min,max,sum);
	
	return 0;
}