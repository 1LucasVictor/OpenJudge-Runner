#include <stdio.h>
int main()
{
	int i[4],n,c;
	while(scanf("%d",&n)!=EOF)
	{
		c=0;
		for(i[0]=0;i[0]<10;i[0]++)
		{
			for(i[1]=0;i[1]<10;i[1]++)
			{
				for(i[2]=0;i[2]<10;i[2]++)
				{
					for(i[3]=0;i[3]<10;i[3]++)
					if(i[0]+i[1]+i[2]+i[3]==n)c++;
	}}}
		printf("%d\n",c);
	}
		
		return 0;
}