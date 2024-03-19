#include <stdio.h>
#include <string.h>

void Replace(char* str, int a, int b, char* ope);
void Reverse(char* str, int a, int b);
void Print(char* str, int a, int b);
void InitStr(char* str, int len);

#define strMAX 1000	//文字列の最大数

int main(void)
{
	char str[strMAX];	//入力する文字列
	int q;				//命令の数
	int a;
	int b;
	char p[strMAX];		//置き換える文字列
	char ope[strMAX];	//命令を入れる文字列
	char input[strMAX];
	int i;

	//配列を初期化する
	InitStr(str, strMAX);
	InitStr(p, strMAX);
	InitStr(ope, strMAX);

	InitStr(input, strMAX);

	//文字列を入力する
	scanf("%s", str);

	//命令数を入力する
	scanf("%d", &q);

	while (q > 0)
	{
		//命令を入力する
		scanf("%s%d%d", ope, &a, &b);

		if (strcmp(ope, "replace") == 0)
		{
			scanf("%s", p);
			Replace(str, a, b, p);
		}
		else if (strcmp(ope, "reverse") == 0)
		{
			Reverse(str, a, b);
		}
		else if (strcmp(ope, "print") == 0)
		{
			Print(str, a, b);
		}
		else
		{
			//処理なし
		}

		//配列を初期化する
		InitStr(ope, strMAX);

		q--;
	}

	return 0;
}

//文字列を置き換える
void Replace(char* str, int a, int b, char* ope)
{
	int i;
	int j = 0;

	for (i = a; i <= b; i++)
	{
		str[i] = ope[j++];
	}
}

//文字列を反転する
void Reverse(char* str, int a, int b)
{
	int i;
	int j;
	char dummy;
	for (i = a, j = b; i <= j; i++, j--)
	{
		dummy = str[i];
		str[i] = str[j];
		str[j] = dummy;
	}
}

//文字列を出力する
void Print(char* str, int a, int b)
{
	int i;
	int j;
	char print[strMAX];
	InitStr(print, strMAX);
	for (i = a, j = 0; i <= b; i++, j++)
	{
		print[j] = str[i];
	}
	printf("%s\n", print);
}

//文字列を初期化する
void InitStr(char* str, int len)
{
	int n;
	for (n = 0; n < len; n++)
	{
		str[n] = '\0';
	}
}

