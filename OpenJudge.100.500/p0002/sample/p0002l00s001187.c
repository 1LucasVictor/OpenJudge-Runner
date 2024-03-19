#include <stdio.h>

void swap(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void)
{
	int i;
	int num;		/* データセット数 */
	int x, y, z;	/* ３辺の長さ */
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d %d %d", &x, &y, &z);
		
		/* x <= y <= z にソート */
		if (x > y)	swap(&x, &y);
		if (y > z)	swap(&y, &z);
		if (x > y)	swap(&x, &y);
		
		if(x*x + y*y == z*z)
			puts("YES");
		else
			puts("NO");
	}
	
	return 0;
}