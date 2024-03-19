#include <stdio.h>

int get_int() {
    int n = 0;
    int c = getchar_unlocked();
    if(c == 45) {
        c = getchar_unlocked();
        while(47 < c && c < 58) n = 10 * n + (c & 0xf), c = getchar_unlocked();
        return -n;
    } else if(c < 48 || 57 < c) return c;
    while(47 < c && c < 58) n = 10 * n + (c & 0xf), c = getchar_unlocked();
    return n;
}
void put_uint(int n) {
    if(!n) {
        putchar_unlocked('0');
        return;
    }
    char buf[11];
    int i = 0;
    while(n) buf[i++] = (char)(n % 10 + '0'), n /= 10;
    while(i--)putchar_unlocked(buf[i]);
}

typedef struct UnionFind {
    int parent[100];
    int rank[100];
    int size[100];
} UnionFind;
void uf_init(UnionFind *UF) {
    const int N = 100;
    for(int i = 0; i < N; ++i) {
        UF->parent[i] = i;
        UF->rank[i] = 0;
        UF->size[i] = 1;
    }
}
#define uf_same(UF, x, y) (uf_find((UF), (x)) == uf_find((UF), (y)))
int uf_find(UnionFind *UF, int x) {
    if(x == UF->parent[x]) return x;
    else return UF->parent[x] = uf_find(UF, UF->parent[x]);
}
void uf_unite(UnionFind *UF, int x, int y) {
    x = uf_find(UF, x), y = uf_find(UF, y);
    if(x == y) return;
    if(UF->rank[x] < UF->rank[y]) UF->parent[x] = y;
    else {
        UF->parent[y] = x;
        if(UF->rank[x] == UF->rank[y]) UF->rank[x]++;
        int tmp = x, x = y, y = tmp;
    }
    UF->size[y] += UF->size[x];
    UF->size[x] = 0;
}

typedef struct Edge {
    int s, t, w;
} Edge;

void *partition(Edge *first, Edge *last) {
    Edge pivot = *(last - 1);
    Edge *p = first - 1;
    for(Edge *it = first; it != last - 1; ++it) {
        if(it->w <= pivot.w) {
            p++;
            Edge tmp = *p;
            *p = *it;
            *it = tmp;
        }
    }
    Edge tmp = *++p;
    *p = pivot;
    *(last - 1) = tmp;
    return p;
}
void quicksort(void *first, void *last, size_t N) {
    if(last - first <= N) return;
    void *mid = partition(first, last);
    quicksort(first, mid, N);
    quicksort(mid, last, N);
}

int kruskal(Edge *G, const int N) {
    quicksort(G, G + N, sizeof(Edge));
    UnionFind UF;
    uf_init(&UF);
    int cost = 0;
    for(int i = 0; i < N; ++i) {
        Edge e = G[i];
        if(!uf_same(&UF, e.s, e.t)) {
            cost += e.w;
            uf_unite(&UF, e.s, e.t);
        }
    }
    return cost;
}

int main(int argc, char **argv) {
    int n = get_int();
    int size = 0;
    Edge G[10000];
    for(int i = 0; i < n; ++i) {
        get_int();
        for(int j = 0; j < n; ++j) {
            int a = get_int();
            if(a > 0) G[size].s = i, G[size].t = j, G[size++].w = a;
        }
    }
    put_uint(kruskal(G, size));
    putchar_unlocked('\n');
    return 0;
}

