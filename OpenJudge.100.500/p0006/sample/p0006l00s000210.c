#include<stdio.h>
int main(void)
{
	int n,i,sum;
	scanf("%d",&n);
	sum=100000;
	for(i=1;i<=n;i++){
		sum=sum*1.05;
		if(sum%1000==0){
		}
		else{
			sum=(sum/1000)*1000+1000;
		}
	}
	printf("%d\n",sum);
	return 0;
}

