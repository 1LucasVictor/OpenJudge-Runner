#include <stdio.h>
#include <math.h>

int main(void)
{
	int i,j = 0,yakusuu,count = 0,n;
	while(scanf("%d",&n) != EOF){
		j = j +1;
		count = 0;
		for(i=1;i<=n;i = i +2)
		{
			yakusuu=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0){
				yakusuu++;
				}
			}
			if(yakusuu==2) {
			count++;
			}
		}
		printf("%d\n",count + 1);
		if(j == 31){
			break;
		}
	}
	return 0;
}