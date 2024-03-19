#include<stdio.h>
int main()
{
	int tate, yoko, i, j;//変数宣言
	while (1)//くり返す
	{
		scanf("%d%d", &tate, &yoko);
		if (tate == 0 && yoko == 0)//0 0のとき終了
		{
			break;
		}
		//作画ポイント
		for (i = 1; i <= tate; i++)
		{
			for (j = 1; j <= yoko; j++)
			{
				if ((i > 1) && (i < tate) && (j < yoko) && (j > 1))//中心部分は"."で表示
				{
					printf(".");
				}
				else//端っこは"#"で表示
				{
					printf("#");
				}
			}
			printf("\n");
		}
		printf("\n");

	}
	return 0;
}

