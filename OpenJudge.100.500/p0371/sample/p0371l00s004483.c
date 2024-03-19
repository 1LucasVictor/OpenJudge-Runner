#include <stdio.h>

int main(void)
{
	int n,i,c_max,c_min;
	long long int c_sum = 0;
	int c[10000];
	
	scanf("%d\n",&n);
	
	for(i=0;i<n;i++){
	scanf("%d",&c[i]);
	}
	c_max = c[0];
	c_min = c[0];
	for(i=1;i<n;i++){
		if(c_max < c[i]){
			c_max = c[i];
		}
		if(c_min > c[i]){
			c_min = c[i];
		}
	}
	for(i=0;i<n;i++){
		c_sum = c_sum + c[i];
	}	
		printf("%d %d %lld\n",c_min,c_max,c_sum);
	return 0;
}