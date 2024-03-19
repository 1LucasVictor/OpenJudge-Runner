#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n, k;
	int w, bk_w;;
	int *nimotu;
	int count, sum;
	int P;
	int max;
	int i, j;


	scanf("%d %d", &n, &k);
	if(k > n)
		k = n;

	nimotu = (int *)malloc(sizeof(int) * n);

	sum = max = 0;
	for(i = 0; i < n; i++){
		scanf("%d", &w);
		sum += nimotu[i] = w;
		if(w > max)
			max = w;
	}

	// 積載重量を求める
	P = sum / k;
	if(max > P)
		P = max;
	count = 0;
	for(i = P; ;i++){
		//printf("<%d>\n", i);
		count = bk_w = 0;
		for(j = 0; j < n; j++){
			if(i >= bk_w + nimotu[j]){
				bk_w += nimotu[j];
				//printf("%d ", bk_w);
			}else{
				bk_w = nimotu[j];
				//printf("\n%d ", bk_w);
				count++;
			}
			if(j == n - 1 && i >= bk_w)
				count++;
			if(count > k)
				break;
		}
		if(j == n && count <= k)
			break;
	}

	printf("%d\n", i);

	return 0;
}
