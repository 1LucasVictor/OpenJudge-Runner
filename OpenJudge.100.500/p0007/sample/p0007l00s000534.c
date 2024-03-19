#include <stdio.h>

int main()
{
	int n,num,i,j,k,l;
	while(~scanf("%d",&n)){
		num=0;
		for(i=0;i<=9;i++)
			for(j=0;j<=9;j++)
				for(k=0;k<=9;k++)
					for(l=0;l<=9;l++)
						if(i+j+k+l==n)
							num++;
		printf("%d\n",num);					
	}
	return 0;
 } 

