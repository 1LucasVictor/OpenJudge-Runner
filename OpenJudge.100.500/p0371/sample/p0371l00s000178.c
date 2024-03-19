#include<stdio.h>

int main(void)
{
	int n,i,a;
	int max;
	int min;
	long total=0;
	
	scanf("%d",&n);
	
	for( i=0 ; i<n ; i++){
		
		scanf("%d",&a);
		total=total+a;
		
		if(max<a){
			max=a;
		}else if(min>a){
			min=a;
		}
	}
	
	printf("%d %d %ld\n",min,max,total);
	return 0;
	
}