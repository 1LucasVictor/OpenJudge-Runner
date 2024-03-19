#include<stdio.h>
int main(void)
{
	int a,b,k;
	
	scanf("%d",&k);
	scanf("%d",&a);
	scanf("%d",&b);
	
	while(a<=b){
		if(a%k==0){
		printf("OK");
		return 0;
		}
		
		else
		a++;
	}
	
	printf("NG");
	

	return 0;
}
