//２つの整数 a, b と１つの演算子 op を読み込んで、a op b を計算するプログラム   
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;//整数
	char op = 'x';//文字
	while (1)//∞ループ
	{
		scanf("%d %c %d", &a, &op, &b);
	if (op == '+') {
		printf("%d\n", a + b);
	}
	else  if (op == '-') {
		printf("%d\n", a - b);
	}
	else if (op == '*') {
		printf("%d\n", a * b);
	}
	else if (op == '/') {
		printf("%d\n", a / b);
	}
	else 
		break;//終了
		

			}
	
	return 0;
 }
