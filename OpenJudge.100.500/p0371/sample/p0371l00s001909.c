#include <stdio.h>

int main()
{
	int n,i;
	long long int a[10000],min=1000000,max=-1000000,sum=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%lld",&a[i]);
		
		if(a[i] >= max){
			
			max = a[i];
			
		}
		
		if(a[i] <= min){
			
			min = a[i];
			
		}
		
		sum+=a[i];
		
	}
	
	
	printf("%lld %lld %lld\n",min,max,sum);
	
	
  return 0;
}