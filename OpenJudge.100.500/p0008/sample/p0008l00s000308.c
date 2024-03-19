#include <stdio.h>

int box[1000000];

int main() {
	int i, j, k;
	int n = 1000000;
	int count = 0;
	int m;

	box[0] = 1;

//	scanf("%d", &n);

	for(i = 0; i < n; i++)
		if(box[i] == 0) 
			for(j = 2; j * (i + 1) - 1 < n; j++)
				box[j * (i + 1) - 1] = 1;
		
//デバッグ用
/*
	for(i = 0; i < n; i++) 
		if(box[i] == 0)
			printf("%d\n", i + 1);
	putchar('\n');
*/
//ここまでデバッグ用

	while(scanf("%d", &m) != EOF){
		count = 0;
		for(i = 0; i < m; i++)
			if(box[i] == 0)
				count++;
		
		printf("%d\n", count);
	}
	return 0;
}