#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int n,a[10000],i,min=1000001,max=-1000001,sum=0;
	
		scanf("%d",&n);
	for(i=0;i<n;i++){scanf("%d",&a[i]);}
	
	for(i=0;i<n;i++){
		
		if(a[i]<min)min = a[i];
		
		}
		
	for(i=0;i<n;i++){
		
		if(a[i]>max)max = a[i];
		
		}
		
	for(i=0;i<n;i++){
		
		sum += a[i];
		
		}
	
	printf("%d %d %d\n",min,max,sum);
	
return 0;}