#include<stdio.h>
#include<math.h>

void print_info(int array[][10]);

int main (void)
{
	int input,sum,count;
	int i,j,k;
	do
	{
		scanf("%d %d",&input,&sum);
		count = 0;
		if(input == 0 && sum == 0)
		{
			break;
		}
		for(i = 1 ; i <= input ; i++ )
		{
			for(j = i+1 ; j <= input ; j++)
			{
				for(k = j+1 ; k <= input ; k++)
				{
					if(i + j + k == sum && i != j && i != k && j != k)
					{
						count++;
					}
				}
			}
		}
		printf("%d\n",count);
	}while(1);
	
	return 0;
}
