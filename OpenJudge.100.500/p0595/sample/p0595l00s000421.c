#include<stdio.h>

int main(void)
{
	int a,b,k,i,c=0;
	
	scanf("%d%d%d",&a,&b,&k);
	i=a+1;
	while(c<k){
		i--;
		if(a%i==0 && b%i==0)
			c++;
		}
	printf("%d",i);
	return 0;
}

		