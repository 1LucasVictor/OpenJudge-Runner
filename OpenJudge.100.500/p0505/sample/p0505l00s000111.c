#include<stdio.h>

int main(void)
{
	int h,n,i,k,sum=0;
	
	scanf("%d",&h,&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&k);
		sum+=k;
	}
	
	if(sum>=h)
		printf("Yes");
	else
		printf("No");
	return 0;
}