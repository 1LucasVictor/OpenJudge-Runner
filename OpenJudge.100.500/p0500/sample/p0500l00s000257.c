#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int s;
	int c;
}pair_t;

int main(void) {
	int n,m;
	pair_t pair[10] = { 0 };
	int ans[6] = { 0 };
	int flag = 1;
	int kettei[3] = { 0 };
	int saikoi = 0;

	scanf("%d %d", &n,&m);

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &pair[i].s,&pair[i].c);
	}
	
	if (m > 3)printf("-1");
	else {
		for (int i = n; i >= 1; i--) {
			for (int j = 0; j < 3; j++) {
				if (pair[j].s == i) {
					if (i == n && pair[j].c == 0)
						flag = 0;
					else {
						if (ans[i] != 0 && ans[i] != pair[j].c)
							flag = 0;
						ans[i] = pair[j].c;
						
					}
				}
			}
		}
		for (int u = 0; u < m; u++) {
			if (pair[u].s == n && pair[u].c >= 1)
				saikoi = 1;
		}
		if (flag == 0||saikoi==0)printf("-1");
		else {
			for (int k = 1; k <= 3; k++)printf("%d", ans[k]);
		}
	}
	return 0;
}