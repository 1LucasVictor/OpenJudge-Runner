#include<stdio.h>
int main(void)
{
	int a[5000],i,j,sum=0,max = -999999,n;
	
	while(1){
		scanf("%d",&n);
		if( n == 0)
			break;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				sum = sum + a[j];
				if(max < sum)
					max = sum;
			}
			sum = 0;
		}
		printf("%d\n",max);
		max = -999999;
	}
	return 0;
}