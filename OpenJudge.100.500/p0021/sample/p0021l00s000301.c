#include<stdio.h>

int main()
{
	int data[5000];
	int n,i,j;
	int max;
	int flg,tmp,swapflg;
	scanf("%d",&n);
	while(n!=0)
	{
		max=-500000000;
		flg=1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&data[i]);
			if(data[i]>0){flg=0;}
		}
		if(!flg){
			for(i=0;i<n-1;i++)
			{
				if(data[i]*data[i+1]>=0)
				{
					data[i]+=data[i+1];
					for(j=i+1;j<n-1;j++)
					{
						data[j]=data[j+1];
					}
					n--;
					i--;
				}
			}


			do
			{
				swapflg=0;
				for(i=0;i<n-2;i++)
				{
					if(data[i]>0)
					{
						tmp=data[i+1]+data[i+2];
						if(tmp>=0&&data[i+2]<tmp+data[i])
						{
							data[i]+=data[i+1]+data[i+2];
							for(j=i+1;j<n-2;j++)
							{
								data[j]=data[j+2];
							}
							n-=2;
							i--;
							swapflg=1;
						}
					}
				}
			}while(swapflg);


		}
		for(i=0;i<n;i++)
		{
			if(data[i]>max)
			{
				max=data[i];
			}
		}
		printf("%d\n",max);
		scanf("%d",&n);
	}
	return 0;
}