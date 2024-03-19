#include <stdio.h>

int max(int x, int y){
	if(x > y){
		return x;
	}else{
		return y;
	}
}

int main()
{
	int n, m, k;
	int a[200001], b[200001];
	int cnt = 0;
	int tmp;
	int res = 0;
    int jk; 

	scanf("%d %d %d", &n, &m, &k);
	a[0] = 0;
	for(int i = 1; i <= n; i++){
		scanf("%d", &tmp);
		a[i] = tmp + a[i-1];
	}
	b[0] = 0;
	for(int i = 1; i <= m; i++){
			scanf("%d", &tmp);
			b[i] = tmp + b[i-1];
	}

	for(int i = 1; i <= n; i++){
      //printf("i = %d\n", i);
		if(a[i] > k){
			break;
		}
		for(int j = 1; j <= m; j++){
          //printf("j = %d\n", j);
			if(a[i] + b[j] > k){
				j--;
				res = max(res, i+j);
                break;
			}
		}
	}
	printf("%d", res);

}
