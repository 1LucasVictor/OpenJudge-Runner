int sosu(int D[10000])
{
	//int D[10000];
int i, j, k;

//printf("2 ");
int count = 0;
D[count] = 2;

for (i = 3; i <= 10000; i += 2)
{
	k = 0;
	for (j = 3; j <= i/3 ; j += 2)
	{
		if (i%j == 0)
		{
			k = 1;
			break;
		}
	}
	
	if (k == 0)
	{
		count++;
		D[count] = j;
	}
}


return (count);
}

int main()
{
	int D[10000];
	int C[10000];
	int n;
	int i, j, k;
	int kosu = 0;
	int count=sosu(D);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &C[i]);
	}
	
	for (j = 0; j < n; j++)
	{
		k = 0;
			for (int l =0 ; l < count ; l ++)
			{
				if (C[j] % D[l] == 0 && C[j]>D[l])
				{
					k=1;
					break;
				}
			}

			if (k == 0)
			{
				kosu++;
			}
	}
	
		printf("%d\n", kosu);	

 }