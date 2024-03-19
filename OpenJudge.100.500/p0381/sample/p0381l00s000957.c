#include <stdio.h>

#define DATA 100

void dbc(int *, int);
int sum(int *);
long int pow2(int);

int main(void)
{
	int binary[DATA], n[DATA], x[DATA], number[3];
	int i, l, m, q, count;
	long int time;
	
	for(i = 0;i < DATA;i++)
	{
		binary[i] = 0;
		n[i] = 0;
		x[i] = 0;
	}
	for(i = 0;i < DATA;i++)
	{
		scanf("%d %d", &n[i], &x[i]);
		if((n[i] == 0) && (x[i] == 0))
			break;
	}
	for(i = 0;(n[i] != 0) || (x[i] != 0);i++)
	{
		count = 0;
		for(l = 0;l <= pow2(n[i]);l++)
		{
			dbc(binary, l);
			if(sum(binary) == 3)
			{
				q = 0;
				for(m = 0;q < 3;m++)
				{
					if(binary[m] == 1)
					{
						number[q] = m + 1;
						q++;
					}
				}
				if(x[i] == number[0] + number[1] + number[2])
					count++;
			}
		}
		printf("%d\n", count);
	}

	return 0;
}

void dbc(int *binary_dbc, int decimal)
{
	int j;

	for(j = 0;j < DATA;j++)
	{
		if(decimal % 2 == 1)
			binary_dbc[j] = 1;
		else
			binary_dbc[j] = 0;
		decimal /= 2;
	}
}

int sum(int *binary_sum)
{
	int k, sum = 0;

	for(k = 0;k < DATA;k++)
	{
		sum += binary_sum[k];
	}

	return sum;
}

long int pow2(int index)
{
	if(index == 0)
		return 1;
	else
	{
		return pow2(index - 1) * 2;
	}
}