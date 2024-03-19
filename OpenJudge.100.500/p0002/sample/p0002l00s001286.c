#include<stdio.h>
int main()
{
	int x,n,L1,L2,L3,max,kaitou[1000]={0};
	scanf("%d",&n);
	for(x=0; x<n; x++)
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
				kaitou[x]=1;
			else
				kaitou[x]=2;
		}
		if(max==2)
		{
			if(L2*L2==L1*L1+L3*L3)
				kaitou[x]=1;
			else
				kaitou[x]=2;
		}
		if(max==3)
		{
			if(L3*L3==L2*L2+L1*L1)
				kaitou[x]=1;
			else
				kaitou[x]=2;
		}
	}
	for(x=0; x<1000; x++)
	{
		if(kaitou[x]==0)
			break;
		if(kaitou[x]==1)
			printf("YES\n");
		if(kaitou[x]==2)
			printf("NO\n");
	}
	return 0;
}