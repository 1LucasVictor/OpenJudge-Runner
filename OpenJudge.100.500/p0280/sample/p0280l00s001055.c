#include <stdio.h>
#define INF (1<<28)

int n;
int M[101][101];

int mst() {
	int res, mini, pointer;
	int cost[101], U[101];
	for (int ix = 0; ix < 101; ++ix) {
		cost[ix] = INF;
		U[ix] = 0;
	}
	cost[0] = 0;
	res = 0;
	while(1) {
		mini = INF;
		pointer = -1;
		for (int ix = 0; ix < n; ++ix) {
			if(U[ix]) continue;
			if(cost[ix] < mini) {
				mini = cost[ix];
				pointer = ix;
			}
		}
		if (pointer == -1) break;
		U[pointer] = 1;
		res += cost[pointer];
		for (int ix = 0; ix < n; ++ix) {
			if (U[ix]) continue;
			if ( M[pointer][ix] < cost[ix] ) {
				cost[ix] = M[pointer][ix];
			}
		}
	}
	return res;
}

int main() {
  scanf("%d\n",&n);
  for (int ix = 0; ix < n; ++ix) {
    for (int jx = 0; jx < n; ++jx) {
      scanf("%d",&M[ix][jx]);
      if (M[ix][jx] == -1) M[ix][jx] = INF;
    }
  }
  printf("%d\n", mst());
  return 0;
}
