#include<stdio.h>
#include<stdlib.h>


#define MAX 100


int main()
{
	int i=0,j,k,n,b,m=0,a=0,cnt=0,flag=1;
	int num[MAX] = {0};
	int arr[MAX];

	while (scanf("%d", &n) != EOF)
	{
		num[cnt] = n;
		++cnt;
	}
	
	while (i != cnt)
	{
		if (num[i] == 0)
		{
			k = i+1;
			j = i - 1;
			arr[m] = j;  //printf("%d\n", num[j]);
			++m;
			while (k<cnt && num[k] == 0)
			{
				--j;
				if (num[j] == 0)
				{
					--j;
				}
				else
				{
					for (a = 0; a < m; a++)
					{
						if (arr[a] == j)
						{
							--j;
							flag = 0;
							break;
						}
					}
					if (flag)
					{
						arr[m] = j;  //printf("%d\n", num[j]);
						++m;
						++k;
					}
					flag = 1;
				}
			}
			i = k;
		}
		else
		{
			++i;
		}
		
	}

	for (i = 0; i < m; i++)
	{
		printf("%d\n",num[arr[i]]);
	}

	return 0;
}
