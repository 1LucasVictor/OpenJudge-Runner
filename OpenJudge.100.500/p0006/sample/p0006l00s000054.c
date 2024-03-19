#include<stdio.h>
int main(void)
{
	int n,sum,i;
	sum=100000;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum*1.05;
		if(sum%1000!=0){
		sum=(sum/1000)*1000+1000;
		}
	}
	printf("%d\n",sum);
	return 0;
}

