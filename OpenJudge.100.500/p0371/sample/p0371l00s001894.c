#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(void){
	
	int a,i,min=INT_MAX,max=INT_MIN,n;
	long sum=0;
	
		scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a);
		
		if(a<=min)min = a;
		
		
		if(a>=max)max = a;
		
		sum += a;
		
		}
	
	printf("%d %d %d\n",min,max,sum);
	
return 0;}