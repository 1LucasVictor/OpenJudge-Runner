#include <stdio.h>
#include <limits.h>

struct node_t {
	int n;
	int e[100][2];
};
typedef struct node_t Node;

int input(Node node[100]) {
	int n, i, j, k;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &j, &k);
		for (j = 0; j < k; j++) {
			scanf("%d %d", &node[i].e[j][0], &node[i].e[j][1]);
		}
		node[i].n = k;
	}
	return n;
}

int main(void) {
	int num;
	int weight[100];
	char V[100];
	int v, cost, vn, index, i;
	Node E[100];

	num = input(E);

	V[0] = weight[0] = 0;
	for (i = 1; i < num; i++) {
		weight[i] = INT_MAX;
		V[i] = 1;
	}
	vn = num - 1;
	index = 0;

	while (vn--) {
		for (i = 0; i < E[index].n; i++) {
			v = E[index].e[i][0];
			if (!V[v])
				continue;
			cost = E[index].e[i][1] + weight[index];
			weight[v] = weight[v] < cost ? weight[v] : cost;
		}
		v = INT_MAX;
		for (i = 0; i < num; i++) {
			if (!V[i])
				continue;
			if (v > weight[i]) {
				v = weight[i];
				index = i;
			}
		}
		V[index] = 0;
	}

	for (i = 0; i < num; i++) {
		printf("%d %d\n", i, weight[i]);
	}
	return 0;
}