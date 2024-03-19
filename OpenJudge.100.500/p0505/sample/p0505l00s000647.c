#include<stdio.h>
#define n 100005
int main()
{
	int H,N,i,b=0;
	int A[n]={0};
	scanf("%d%d",&H,&N);
	for(i=0;i<N;i++)
	scanf("%d",&A[i]);
	for(i=0;i<N;i++)
	b+=A[i];
	if(b>=H)
	printf("Yes");
	else
	printf("No");
	return 0;
}