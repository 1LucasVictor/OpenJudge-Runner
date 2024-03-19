#include<stdio.h>
 
#define MAX 8
#define FREE 0
#define NOTFREE 1
 
int map[MAX][MAX], queen[MAX][MAX], n, flag, a[MAX];
 
int check(int x, int y) {
    int i, j;
    
	for (i = 0; i < MAX; i++) {
		if(queen[x][i] == NOTFREE) return 0;
	}
	for (i = 0; i < MAX; i++) {
		if(queen[i][y] == NOTFREE) return 0;
	}
	for (i = x, j = y; i < MAX && j < MAX; i++, j++) {
		if(queen[i][j] == NOTFREE) return 0;
	}
	for (i = x, j = y; i >= 0 && j < MAX; i--, j++) {
		if(queen[i][j] == NOTFREE) return 0;
	}
	for (i = x, j = y; i >= 0 && j >= 0; i--, j--) {
		if(queen[i][j] == NOTFREE) return 0;
	}
	for (i = x, j = y; i < MAX && j >= 0; i++, j--) {
		if(queen[i][j] == NOTFREE) return 0;
	}

	return 1;
}
 
void putQueen(int x, int cnt) {
    int i;
    
	if (cnt >= MAX - n) {
		flag=1;
		return;
	}
	
	if (x > MAX) return;
	
	for (i = 0; i < MAX; i++) {
		if (a[x]) {
			putQueen(x+1, cnt);
			if (flag) return;
		}
 
		if (!queen[x][i] && check(x,i)) {
			queen[x][i] = NOTFREE;
			map[x][i] = NOTFREE;
			putQueen(x+1, cnt+1);
			if (flag) return;
			queen[x][i] = FREE;
			map[x][i] = FREE;
		}
	}
}
 
int main()
{
    int i, j, x, y;
    
	while (scanf("%d",&n) != EOF) {
	    for (i = 0; i < MAX; i++) {
	        a[i] = 0;
	        for (j = 0; j < MAX; j++) {
	            map[i][j] = FREE;
	            queen[i][j] = FREE;
	        }
	    }
		flag=0;
		for (i = 0; i < n; i++) {
			scanf("%d%d",&x, &y);
			a[x] = 1;
			map[x][y] = NOTFREE;
			queen[x][y] = NOTFREE;
		}
		
		putQueen(0, 0);
		
		for (i = 0; i < MAX; i++) {
			for (j = 0; j < MAX; j++) {
			    printf("%c", map[i][j] == 0 ? '.' : 'Q');
			}
			printf("\n");
		}
	}
	return 0;
}
