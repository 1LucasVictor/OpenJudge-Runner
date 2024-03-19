#include<stdio.h>
int main(void)
{
	int A,B,T,i,ans=0;
	scanf("%d %d %d",&A,&B,&T);
	for (i=A;i<=T;i+=A)
		ans+=B;
	printf("%d\n",ans);
	return 0;
}