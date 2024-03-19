#include<stdio.h> 
int main()
{int A,B,C,D,sum,x,y;
while(~scanf("%d%d%d%d",&A,&B,&C,&D))
{
	if(B<C||D<A)
	printf("0\n");
	else {
	x=A>C?A:C;
	y=B<D?B:D;
sum=y-x;
printf("%d\n",sum);
}}
return 0;}