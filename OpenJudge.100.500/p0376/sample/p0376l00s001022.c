#include <stdio.h>

int main(void)
{
	int i, j, tmp,n;
	int data[105];


		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &data[i]);
		}

	for (i = n; i >-1; i--)//上から順番に処理
	{
		for (j = i - 1; j > -1; j--)
		{
			if (data[i] > data[j]) {//もし、data[i]>data[j]となれば、実行。
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}



	for (i = 0; i < n - 1; i++)//上を繰り返し後、画面に出力。
	{
		printf("%d ",data[i]);
	}
	printf("%d\n",data[n-1]);

	return 0;//おわり。
}
