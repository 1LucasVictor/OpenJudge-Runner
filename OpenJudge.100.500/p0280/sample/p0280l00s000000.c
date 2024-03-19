#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define INFINITE 1000000
#define USED -1
// Maximum number of nodes
#define NODENUM 100

#define SIZE 100
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int parent[SIZE];
int depth[SIZE];

typedef struct pair {
    int first;
    int second;
} Pair;

// 隣接行列. 辺が使用済みの場合はUSEDにする
int dist[NODENUM][NODENUM];

int find(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y)
        return;
    if (depth[x] < depth[y]) {
        int tmp = x;
        x = y;
        y = tmp;
    }
    // depth[x] > depth[y]
    parent[y] = x;
    depth[x] = MAX(depth[x], depth[y] + 1);
}

// 重さ最小の枝を見つける(heapは面倒なので使わない)
Pair findMinEdge(int n) {
    int min = INFINITE;
    Pair minPair;
    int flag = 0;
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (dist[i][j] != USED && dist[i][j] < min) {
                min = dist[i][j];
                minPair.first = i;
                minPair.second = j;
                flag = 1;
            }
        }
    }
    if (!flag) {
        minPair.first = -1;
        return minPair;
    }
    return minPair;
}

int kruscal(int nodeNum)
{
    int i, j, k;
    long weight = 0;
    for (i = 0; i < nodeNum; i++)
        parent[i] = i;
    Pair p = findMinEdge(nodeNum);
    while (p.first != -1) {
        if (find(p.first) != find(p.second)) {
            unite(p.first, p.second);
            weight += dist[p.first][p.second];
        }
        dist[p.first][p.second] = USED;
        dist[p.second][p.first] = USED;
        p = findMinEdge(nodeNum);
    }
    return weight;
}

int main (void)
{
    int c, r;
    for (c = 0; c < NODENUM; c++)
        for (r = 0; r < NODENUM; r++)
            dist[c][r] = (c == r)? 0 : INFINITE;
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &dist[i][j]);
            if (dist[i][j] == -1)
                dist[i][j] = INFINITE;
        }
    }
    printf("%d\n", kruscal(n));
    return 0;
}
