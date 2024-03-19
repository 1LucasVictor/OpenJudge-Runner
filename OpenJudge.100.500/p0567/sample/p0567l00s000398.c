#include<stdio.h>
int main(void)
{
	int A,B,C,D,Ans;
	scanf("%d %d %d",&A,&B,&C);
	D=A-B;
	if(C-D>0)
		Ans=C-D;
	else
		Ans=0;


	printf("%d",Ans);
	return 0;
}
