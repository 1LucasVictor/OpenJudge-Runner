#include <stdio.h>
int main()
{
	int a=0,b=0,c=0,d=0,e=0;
	int j[10];
	int tmp=0;
	int k=0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&k);
	
	
	for(int i=0;i<10;i++)
	{
		j[i]=0;
	}
	
	tmp=a-b;
	if(tmp<0)
	{
		tmp=-tmp;
	}
	
	if(tmp<=k)
	{
		j[0]=1;
	}
	
	
	tmp=a-c;
	if(tmp<0)
	{
		tmp=-tmp;
	}
	
	if(tmp<=k)
	{
		j[1]=1;
	}
	
	tmp=a-d;
	if(tmp<0)
	{
		tmp=-tmp;
	}
	
	if(tmp<=k)
	{
		j[2]=1;
	}
	
	tmp=a-e;
	if(tmp<0)
	{
		tmp=-tmp;
	}
	
	if(tmp<=k)
	{
		j[3]=1;
	}
	
	tmp=b-c;
	if(tmp<0)
	{
		tmp=-tmp;
	}
	
	if(tmp<=k)
	{
		j[4]=1;
	}
	
	tmp=b-d;
	if(tmp<0)
	{
		tmp=-tmp;
	}
	
	if(tmp<=k)
	{
		j[5]=1;
	}
	
	tmp=b-e;
	if(tmp<0)
	{
		tmp=-tmp;
	}
	
	if(tmp<=k)
	{
		j[6]=1;
	}
	
	tmp=c-d;
	if(tmp<0)
	{
		tmp=-tmp;
	}
	
	if(tmp<=k)
	{
		j[7]=1;
	}
	
	tmp=c-e;
	if(tmp<0)
	{
		tmp=-tmp;
	}
	
	if(tmp<=k)
	{
		j[8]=1;
	}
	
	tmp=d-e;
	if(tmp<0)
	{
		tmp=-tmp;
	}
	
	if(tmp<=k)
	{
		j[9]=1;
	}
	
	if(j[0]==1&&j[1]==1&&j[2]==1&&j[3]==1&&j[4]==1&&j[5]==1&&j[6]==1&j[7]==1&&j[8]==1&&j[9]==1)
	{
		printf("Yay!");
	}
	
	else
	{
		printf(":(");
	}
	
	
	return 0;
}