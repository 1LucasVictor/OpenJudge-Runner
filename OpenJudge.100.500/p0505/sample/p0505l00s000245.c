#include<stdio.h>

int main()
{
	int H,N,i,A;
	scanf("%d%d",&H,&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&A);
		H-=A;
	}
	if(H<=0) puts("Yes");
	else puts("No");
    return 0;
}