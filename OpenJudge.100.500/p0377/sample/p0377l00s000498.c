#include<stdio.h>

int main()
{
	int c[4][13] = {}, n, i, j, num;
	char mark, m[] = {'S', 'H', 'C', 'D'};

	scanf("%d\n", &n);
	for(i = 0; i < n; i++) {
		scanf("%c %d\n", &mark, &num);
		if(mark == 'S') {
			c[0][num - 1] = 1;
		}else if(mark == 'H') {
			c[1][num - 1] = 1;
		}else if(mark == 'C') {
			c[2][num - 1] = 1;
		}else if(mark == 'D') {
			c[3][num - 1] = 1;
		}else {
			printf("error:[%c]\n", mark);
		}
	}

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 13; j++) {
			if(c[i][j] == 0) printf("%c %d\n", m[i], j + 1);
		}
	}

	return 0;
}

