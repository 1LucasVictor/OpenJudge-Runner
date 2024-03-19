#include <stdio.h>
#include <stdlib.h>

void solve(int x) {
	printf("%d", x);
	exit(0);
}
int main() {
	int n, m, a[3] = {-1, -1, -1}, s, c, i;
	scanf("%d %d", &n, &m);
	for(i = 0; i < m; i++) {
		scanf("%d %d", &s, &c);
		if(a[--s] == -1)
			a[s] = c;
		else if(a[s] != c)
			solve(-1);
	}
	if(n == 1)
		solve(a[0] == -1 ? 0 : a[0]);
	else {
		int r = 0;
		for(i = 0; i < n; i++)
			r = 10*r + (a[i] == -1 ? !i : a[i]);
		solve(a[0] ? r : -1);
	}
}