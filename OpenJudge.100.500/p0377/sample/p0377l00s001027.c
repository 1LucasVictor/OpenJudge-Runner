#include <stdio.h>

int main(void)
{
	char M;
	int n, i, count, plus = 0;
	int S[13] ={0},H[13] = {0}, C[13] = {0}, D[13] = {0};
	scanf("%d", &n);
	while (plus < n) //???????????????n?????\???
	{
		getchar();
		scanf("%c %d", &M, &i);
		switch (M)
		{
			case 'S' :
				S[i - 1] = 1;
				break;
			case 'H' :
				H[i - 1] = 1;
				break;
			case 'C' :
				C[i - 1] = 1;
				break;
			case 'D' :
				D[i - 1] = 1; 
				break;
		}
		plus++;
	}
	//?¶????????????????????????¢???
	for (count = 0; count < 13; count++)
	{
		if(S[count] == 0)
		printf("S %d\n", count + 1);
	}
		for (count = 0; count < 13; count++)
	{
		if(H[count] == 0)
		printf("H %d\n", count + 1);
	}
		for (count = 0; count < 13; count++)
	{
		if(C[count] == 0)
		printf("C %d\n", count + 1);
	}
		for (count = 0; count < 13; count++)
	{
		if(D[count] == 0)
		printf("D %d\n", count + 1);
	}
	return 0;
}