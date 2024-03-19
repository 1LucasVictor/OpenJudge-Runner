#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int N;
	int A, B, C, D;
	char(*S)= (char(*))malloc(200010 * sizeof(char));
	int i;
	int c_flag = 0;
	int d_flag = 0;
	int cd_flag = 0;
	int none_count = 0;
	scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);
	S[0] = '1';/*ダミー*/
	for(i = 0;i <= N+1;i++)
	{
		scanf("%c", &S[i]);/*S[0]は値なし。S[1]から*/
	}
	
	
	if (C < D)
	{
		for (i = B+1;i < D;i++)
		{
			if (S[i] == '#'&&S[i + 1] == '#')
			{
				d_flag = 1;
				break;
			}
		}
		for (i = (A + 1);i < C;i++)
		{
			if ((S[i] == '#'&&S[i + 1] == '#')||(i==D && S[i + 1] == '#')||(S[i] == '#'&& (i + 1) == D))
			{
				c_flag = 1;
				break;
			}
		}
	}else
	{
		for (i = (B + 1);i < D;i+=3)
		{
			if (S[i] == '.'&&S[i + 1] == '.'&&S[i + 2] == '.')
			{
				none_count = 1;
				break;
			}
		}
		for (i = (B + 1);i < D;i++)
		{
			if (S[i] == '#'&&S[i + 1] == '#')
			{
				d_flag = 1;
				break;
			}
		}
		for (i = (A + 1);i < C;i++)
		{
			
			if (S[i] == '#'&&S[i + 1] == '#')
			{
				c_flag = 1;
				break;
			}
			if ( (i == D && S[i + 1] == '#') || (S[i] == '#'&& (i + 1) == D))
			{
				c_flag = 1;
				cd_flag = 1;
				break;
			}
		}
	}

	if (none_count == 1 && cd_flag == 1)c_flag = 0;
	
	if (c_flag == 1 || d_flag == 1)printf("No\n");
	else printf("Yes\n");
	return 0;
}