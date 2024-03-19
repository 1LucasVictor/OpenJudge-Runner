#include<stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
int A[100][100];
int d[100],p[100],color[100],mincost;
void prim(int);
int goukei(int);
int main() {
	int i,j,n,a;
	scanf("%d",&n);
	for (i = 0; i < n;i++) {
		for (j = 0; j < n;j++) {
			scanf("%d", &a);
			if (a == -1) {
				A[i][j] = 2001;
			}
			else {
				A[i][j] = a;
			}
		}
	}
	prim(n);
	printf("%d\n",goukei(n));
	return 0;

}
void prim(int n) {
	int i,v,u;
	for (i = 0; i < n;i++) {
		color[i] = WHITE;
		d[i] = 2001;
	}
	d[0] = 0;
	p[0] = -1;

	while (1) {
		mincost = 2001;
		for (i = 0; i < n;i++) {
			if (color[i] != BLACK && d[i] < mincost) {
				mincost = d[i];
				u = i;
			}
		}
		if (mincost == 2001) {
			//printf("%d\n",u);
			break;
		}
		color[u] = BLACK;

		for (v = 0; v < n;v++) {
			if (color[v] != BLACK && A[u][v] < 2001) {
				if (A[u][v] < d[v]) {
					d[v] = A[u][v];
					p[v] = u;
					color[v] = GRAY;
				}
			}
		}
	}
}
int goukei(int n) {
	int i,sum= 0;
	for (i = 0; i < n;i++) {
		sum += d[i];
	}
	return sum;
}
