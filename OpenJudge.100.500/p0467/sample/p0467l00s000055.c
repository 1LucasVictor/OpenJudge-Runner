#include<stdio.h>
int main(void)
{
	int a,b,c,k,sa1,sa2,sum;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	sa1=k-a;
	sum=0;
	sum+=k-sa1;
	if(sa1>=1){
		sa2=sa1-b;
		if(sa2>=1){
			sum-sa2;
		}
	}
	printf("%d\n",sum);
	return 0;
}