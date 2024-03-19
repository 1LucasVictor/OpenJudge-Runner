#include<stdio.h>

int main(void)
{
	int cnt, f1, f2, f3, f4, n;
	while(scanf("%d",&n) != EOF){
		cnt = 0;
		for(f1 = 0; f1 <= 9; f1++)
		{
			for(f2 = 0; f2 <= 9; f2++)
			{
				for(f3 = 0; f3 <= 9; f3++)
				{
					for(f4 = 0; f4 <= 9; f4++)
					{
						if(f1 + f2 + f3 + f4 == n)
							cnt++;
					}
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}