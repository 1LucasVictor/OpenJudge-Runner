#include<stdio.h>
int main()
{
	int x,N,L1,L2,L3,max;
	scanf("%d",&N);
	for(x=0; x<N; x++)
	{
		max=1;
		scanf("%d %d %d",&L1,&L2,&L3);
		if(L1<L2)
			max=2;
		if(L2<L3)
			max=3;
		if(max==1)
		{
			if(L1*L1==L2*L2+L3*L3)
				printf("YES\n");
			else
				printf("NO\n");
		}
		if(max==2)
		{
			if(L2*L2==L1*L1+L3*L3)
				printf("YES\n");
			else
				printf("NO\n");
		}
		if(max==3)
		{
			if(L3*L3==L2*L2+L1*L1)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}