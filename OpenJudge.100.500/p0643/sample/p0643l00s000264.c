#include<stdio.h>

//関数プロトタイプ宣言
void OddEven(int a, int b);

int main(void) 
{
	int a, b;

	scanf("%d %d", &a, &b);

	OddEven(a, b);

	return 0;
}

void OddEven(int a, int b) 
{
	if ( (a * b) % 2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}