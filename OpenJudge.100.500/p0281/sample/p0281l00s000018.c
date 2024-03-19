#include <stdio.h>

static const int MAX = 10;
static const int INFINITY = 1 << 21;
static const int WHITE = 0;
static const int GRAY  = 1;
static const int BLACK = 2;

static int n;
static int M[MAX][MAX];

static void dijkstra()
{
    int minv;
    int d[MAX];
    int color[MAX];

    for (int i = 0; i < n; i++) {
        d[i] = INFINITY;
        color[i] = WHITE;
    }

    d[0] = 0;
    color[0] = GRAY;
    while (1) {
        minv = INFINITY;
        int u = -1;
        for (int i = 0; i < n; i++) {
            if (minv > d[i] && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }

        if (u == -1)
            break;

        color[u] = BLACK;

        for (int v = 0; v < n; v++) {
            if (color[v] != BLACK && M[u][v] != INFINITY) {
                if (d[v] > d[u] + M[u][v]) {
                    d[v] = d[u] + M[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", i, (d[i] == INFINITY) ? -1 : d[i]);
    }
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = INFINITY;
        }
    }

    for (int i = 0; i < n; i++) {
        int u, k;
        scanf("%d %d", &u, &k);
        for (int j = 0; j < k; j++) {
            int v, c;
            scanf("%d %d", &v, &c);
            M[u][v] = c;
        }
    }

    dijkstra();
    return 0;
}
