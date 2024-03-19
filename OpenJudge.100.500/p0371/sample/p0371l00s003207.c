#include <stdio.h>

int main(void)
{
	long min,max,sum = 0L;
	int i,n = 0;
	int in;

	scanf("%d",&n);

	for(i = 0;i < n; i++)
	{
		scanf("%d",&in);
		if(i == 0)
		{
			min,max = in;
		}else{
			if(min > in)
			{
				min = in;
			}
			if(max < in){
				max = in;
			}
		}

		sum = sum + in;
	}
	printf("%d %d %d\n",min,max,sum);
	return 0;
}