#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n,i;
	long int na,min,max,sum;
	scanf("%d",&n);
	min=1000000000;
	max=-100000000;
    sum=0;
for(i=1;i<=n;i++)
{   
	scanf("%d", &na);
	if(na<min) min=na;
	if(na>max) max=na;
	sum=sum+=na;


}printf("%ld %ld %ld\n",min,max,sum);
		return EXIT_SUCCESS;
}