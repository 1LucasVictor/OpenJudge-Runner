#include <stdio.h>

int BubSort(int x[ ], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (x[j - 1] > x[j]) {  /* 前の要素の方が大きかったら */
                temp = x[j];        /* 交換する */
                x[j] = x[j - 1];
                x[j - 1]= temp;
            }
        }
    }
}

int main(void) {
	int a[3];
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	BubSort(a, 3);
	printf("%d %d %d\n",a[0], a[1], a[2]);
	return 0;
}