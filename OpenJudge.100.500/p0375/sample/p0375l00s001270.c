#include<stdio.h>
int main(void){
	int n;
	int check[10000] = { 0 };
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		/*if (i % 3 == 0)
		{
			check = i;
			printf(" %d", i);
		}
		if (i % 10 == 3&&i>=10)
		{
			if (check != i)
			{
				printf(" %d", i);
			}

		}*/
		if (i % 3 == 0)//3????????°
		{
			check[i] = 1;
		}
		if (i % 10 == 3)//1?????????3
		{
			check[i] = 1;
		}
		if (i <= 30 && i >= 39){
			check[i] = 1;
		}
	}
	for (int a = 1; a <= n; a++)
	{
		if (check[a] == 1)
		{
			printf(" %d", a);
		}
	}
	printf("\n");
}