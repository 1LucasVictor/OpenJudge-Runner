#include<stdio.h>
int main(void)
{
	int a[5000],i,j,sum=0,max[5000]={-999999},c=0,n;
	
	while(1){
		scanf("%d",&n);
		if( n == 0)
			break;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				sum = sum + a[j];
				if(max[c] < sum)
					max[c] = sum;
			}
			sum = 0;
		}
		c++;
	}
	for(i=0;i<c;i++){
		printf("%d\n",max[i]);
	}
	return 0;
}