#include<stdio.h>
int main()
{
	int x,N,L1,L2,L3,max,a1,a2;
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
			a1=L1*L1;
			a2=L2*L2+L3*L3;
			if(a1==a2)
				printf("YES\n");
			else
				printf("NO\n");
		}
		if(max==2)
		{
			a1=L2*L2;
			a2=L1*L1+L3*L3;
			if(a1==a2)
				printf("YES\n");
			else
				printf("NO\n");
		}
		if(max==3)
		{
			a1=L3*L3;
			a2=L1*L1+L2*L2;
			if(a1==a2)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}