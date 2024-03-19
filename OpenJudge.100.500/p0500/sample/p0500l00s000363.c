#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int s;
	int c;
}pair_t;

int cmp(const void* p, const void* q) {
	return ((pair_t*)p)->s - ((pair_t*)q)->s;
}

int main(void) {
	int n,m;
	pair_t pair[10] = { 0 };
	int ans[6] = { 0 };
	int flag = 1;
	
	scanf("%d %d", &n,&m);

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &pair[i].s,&pair[i].c);
	}
	
	qsort(pair, m, sizeof(pair_t), cmp);
	

	for (int i = 0; i < m; i++) {
		if (pair[i].s == pair[i + 1].s && pair[i].c != pair[i + 1].c)
			flag = 0;
		ans[pair[i].s] = pair[i].c;
	}
	if (flag == 0 || ans[1] == 0) {
		if (flag == 0 || n > 1)printf("-1");
		else printf("0");
	}
	else {
		for (int i = 1; i <= n; i++)printf("%d", ans[i]);
	}
	
	return 0;
}