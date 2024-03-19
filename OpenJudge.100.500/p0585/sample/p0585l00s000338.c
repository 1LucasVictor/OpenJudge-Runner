#include<stdio.h>
int main()
{
	int A,B,T,s=0;
	scanf("%d%d%d",&A,&B,&T);
	s=(int)T/A;
	if(s>0)
	printf("%d\n",s*B);
	else 
	printf("0\n");
	return 0;
}