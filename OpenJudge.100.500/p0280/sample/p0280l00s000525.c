#include <stdio.h>
#include <limits.h>
#define MAX 101
typedef struct {
	int w;
	int u;
	int v;
} HEN;

HEN all[MAX] = {0};
int n;
int num = 0;
int DS[MAX] = {0};
int rank[MAX] = {0};

void inithen() {
	int i;
	for (i = 0; i < MAX; ++i) {
		all[i].w = INT_MAX;
	}
	return;
}

void add(int weight, int a, int b) {
	int i, j;
	HEN tmp;

	if (num == 0) {
		all[0].w = weight;
		all[0].u = a;
		all[0].v = b;
		num++;
		return;
	}

	for (i = 0; ((all[i].w < weight) && (i < num)) ; ++i);
	
	for (j = num; j > i ; --j) {
		all[j] = all[j-1];
	}
	all[i].w = weight;
	all[i].u = a;
	all[i].v = b;

	num++;
}

void initDS() {
	int i;
	for (i = 0; i < MAX; ++i) {
		DS[i] = i;
		rank[i] = 0;
	}
	return;
}

int find(int x) {
	if (x != DS[x]) {
		DS[x] = find(DS[x]);
	}
	return DS[x];
}

int isSame(int x, int y) {
	return find(x) == find(y);
}

void link(int x, int y) {
	if (rank[x] > rank[y]) {
		DS[y] = x;
	} else {
		DS[x] = y;
		if (rank[x] == rank[y]) {
			rank[y]++;
		}
	}
}

void unite(int x, int y) {
	link(find(x), find(y));
	return;
}




int main() {
	int i, j, tmp;
	inithen();
	initDS();
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			scanf("%d", &tmp);
			if (i < j && tmp != -1) {
				add(tmp, i, j);
			}
		}
	}
//	printf("test\n");
	tmp = 0;
	for (i = 0; i < n; ++i) {
		if (find(all[i].u) != find(all[i].v)) {
//			printf("u = %d, v = %d, w = %d\n", all[i].u, all[i].v, all[i].w);
			tmp += all[i].w;
			unite(all[i].u, all[i].v);
		}
	}
	printf("%d\n", tmp);
	return 0;
}