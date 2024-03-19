#include <stdio.h>
/*　pivot関数
	ピボットの決定を行う
	引数は、配列の先頭アドレス、左端のindex、右端のindex
	数列の左から見て、最初に得られた異なる2要素のうち
	大きいほうの要素番号を返す。
	数列の値がすべて同じ場合は -1 を返す。
*/
int pivot(int *a, int i, int j)
{
	int k = i + 1;
	while(k <= j && a[i] == a[k]){
		k++;
	}
	if(k > j){
		return -1;
	}
	if(a[i] >= a[k]){
		return i;
	}
	return k;
}

/*
	partition関数
	a[i] ~ a[j]の間で、pivotを軸として分割を行う。
	引数は、配列の先頭アドレス、左端のindex、右端のindex、ピボットの値
	返り値は、ピボット以上のグループの開始番号
*/
int partition(int *a, int l, int r, int pivot)
{
	int tmp;
	while(l < r){
		while(a[l] < pivot){
			l++;
		}
		while(a[r] >= pivot){
			r--;
		}
		if(l < r){
			tmp = a[l];
			a[l] = a[r];
			a[r] = tmp;
			l++;
			r--;
		}
	}
	return l;
}

void quick_sort(int *a, int i, int j)
{
	if(i == j) return;
	int p = pivot(a, i, j);
	if(p != -1){
		int k = partition(a, i, j, a[p]);
		quick_sort(a, i, k - 1);
		quick_sort(a, k, j);
	}
}

int main()
{
	int n, i, j;
	int a[200000];
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d ", &a[i]);
	}
	quick_sort(a, 0, n - 1);
	for(i = 0; i < n - 1; i++){
		if(a[i] == a[i + 1]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	
	return 0;
}