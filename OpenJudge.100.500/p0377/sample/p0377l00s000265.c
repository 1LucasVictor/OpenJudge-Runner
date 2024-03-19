#include<stdio.h>
int main()
{
	int n,have_num, have[4][13] = { 0 }, a, b;
	char mark;
	scanf("%d", &n);
	for (a=0;a<n;a++)
	{
		scanf(" %c %d", &mark, &have_num);
		switch (mark)
		{
		case 'S': have[0][have_num - 1] = 1; break;
		case 'H': have[1][have_num - 1] = 1; break;
		case 'C': have[2][have_num - 1] = 1; break;
		case 'D': have[3][have_num - 1] = 1; break;
		}
	}
		for (a=0;a<4;a++)
		{
			for (b = 0; b < 13; b++)
			{
				if (have[a][b] == 0)
				{
					     if (a == 0) mark = 'S';
					else if (a == 1) mark = 'H';
					else if (a == 2) mark = 'C';
					else if (a == 3) mark = 'D';
					printf("%c %d\n",mark,b+1);
				}
			}
		}

	return 0;
}