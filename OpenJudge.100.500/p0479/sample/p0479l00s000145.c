#include <stdio.h>

void	ft_swap(long *a, long *b)
{
	long tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_quick_sort(long *d, long left, long right)
{
	long Left, Right;
	long pivot;

	Left = left, Right = right;
	pivot = d[(left + right) / 2];

	//昇順ソートの場合
	while (1)
	{
		//pivot(基準)より小さい場合進んでpivotより大きい値の要素を探す
		while (d[Left] < pivot)
			Left++;
		//pivot(基準)より大きい場合進んでpivotより小さい値の要素を探す
		while (d[Right] > pivot)
			Right--;
		if (Left >= Right)
			break;
		//d[Left]の、基準より大きい値と d[Right]の基準より小さい値を入れ替え
		ft_swap(&d[Left], &d[Right]);
		Left++; Right--;
	}
	// 左のデータ群を対象としてクイックソートを再帰
	// left から (Left - 1) まで探索
	if (left < Left - 1)
		ft_quick_sort(d, left, Left - 1);
	// 右のデータを対象としてクイックソートを開始
	// right から (Right - 1)まで探索
	if (Right + 1 < right)
		ft_quick_sort(d, Right + 1, right);
}

int main()
{
	long n;
	scanf("%ld", &n);
	long a[n];
	long b[n];
	long i = 1;
	long j = 0;
	while (i < n)
	{
		scanf("%ld", &a[i]);
		b[j] = i;
		i++;
		j++;
	}
	b[j] = i;
	i = 0;
	long x  = 1;
	long count = 0;
	while (i < n)
	{
		j = 0;
		count = 0;
		while (j < n)
		{
			if (b[i] == a[j])
			{
				count++;
			}
			j++;
		}
		printf("%ld\n", count);
		i++;
	}
	return 0;
}
