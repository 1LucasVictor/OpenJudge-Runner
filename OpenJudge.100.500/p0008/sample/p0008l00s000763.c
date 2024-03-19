#include <stdio.h>
#include <math.h>

int main(void)
{
	int i,j = 0,yakusuu,count = 0,n;
	while(scanf("%d",&n) != EOF){
		j = j +1;
		count = 0;
		for(i=3;i<=n;i = i +2)
		{
			yakusuu=1;
			for(j=3;j<i;j = j + 2)
			{
				if(i%j==0){
					yakusuu = 0;
					break;
				}
			}
			if(yakusuu==1) {
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