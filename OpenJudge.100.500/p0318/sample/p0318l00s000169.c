#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key, parent, left, right;
};

void pre(struct Node *T, int h) {
    if (h == -1) return;
    printf(" %d", T[h].key);
    pre(T, T[h].left);
    pre(T, T[h].right);
}
void in(struct Node *T, int h) {
    if (h == -1) return;
    in(T, T[h].left);
    printf(" %d", T[h].key);
    in(T, T[h].right);
}


int find(struct Node *T, int k, int h) {
    int x = h;
    while (x != -1) {
        if (k == T[x].key) break;
        else if (k < T[x].key) x = T[x].left;
        else x = T[x].right;
    }
    return x;
}

int main(void) {
    int m, n, i, h = -1;
    char command[10];
    scanf("%d", &m);
    struct Node *T = malloc(sizeof(struct Node) * m);
    for (i = 0; i < m; i++) {
        T[i].parent = -1;
        T[i].left = T[i].right = -1;
    }
    for (i = 0; i < m; i++) {
        scanf("%s", command);
        if (command[0] == 'i') {
            int x = h, y = -1, z;
            scanf("%d", &z);
            T[i].key = z;
            while (x != -1) {
                y = x;
                if (z < T[x].key) x = T[x].left;
                else x = T[x].right;
            }
            T[i].parent = y;
            if (y == -1) h = i;
            else if (z < T[y].key) T[y].left = i;
            else T[y].right = i;
        }
        else if (command[0] == 'f') {
            int x, k;
            scanf("%d", &k);
            x = find(T, k, h);
            if (x != -1) printf("yes\n");
            else printf("no\n");
        }
        else if (command[0] == 'd') {
            int x, k;
            scanf("%d", &k);
            x = find(T, k, h);
            if (x == h) {
                if (T[x].left == -1 && T[x].right == -1) {
                    h = -1;
                    T[x].parent = T[x].left = T[x].right = -1;
                }
                else if (T[x].left == -1 && T[x].right != -1) {
                    h = T[x].right;
                    T[h].parent = -1;
                    T[x].parent = T[x].left = T[x].right = -1;
                }
                else if (T[x].right == -1 && T[x].left != -1) {
                    h = T[x].left;
                    T[h].parent = -1;
                    T[x].parent = T[x].left = T[x].right = -1;
                }
                else {
                    int l = T[x].right;
                    while (T[l].left != -1) l = T[l].left;
                    T[x].key = T[l].key;

                    if (T[l].right == -1) {
                        int p = T[l].parent;
                        if (T[p].left == l) T[p].left = -1;
                        else T[p].right = -1;
                        T[l].parent = T[l].left = T[l].right = -1;
                    }
                    else {
                        int p = T[l].parent;
                        if (T[p].left == l) T[p].left = T[l].right;
                        else T[p].right = T[l].right;
                        T[T[l].right].parent = p;
                        T[l].parent = T[l].left = T[l].right = -1;
                    }
                }
            }
            else if (x != -1) {
                if (T[x].left == -1 && T[x].right == -1) {
                    int p = T[x].parent;
                    if (T[p].left == x) T[p].left = -1;
                    else T[p].right = -1;
                    T[x].parent = T[x].left = T[x].right = -1;
                }
                else if (T[x].left == -1 && T[x].right != -1) {
                    int p = T[x].parent;
                    if (T[p].left == x) T[p].left = T[x].right;
                    else T[p].right = T[x].right;
                    T[T[x].right].parent = p;
                    T[x].parent = T[x].left = T[x].right = -1;
                }
                else if (T[x].right == -1 && T[x].left != -1) {
                    int p = T[x].parent;
                    if (T[p].left == x) T[p].left = T[x].left;
                    else T[p].right = T[x].left;
                    T[T[x].left].parent = p;
                    T[x].parent = T[x].left = T[x].right = -1;
                }
                else {
                    int l = T[x].right;
                    while (T[l].left != -1) l = T[l].left;
                    T[x].key = T[l].key;

                    if (T[l].right == -1) {
                        int p = T[l].parent;
                        if (T[p].left == l) T[p].left = -1;
                        else T[p].right = -1;
                        T[l].parent = T[l].left = T[l].right = -1;
                    }
                    else {
                        int p = T[l].parent;
                        if (T[p].left == l) T[p].left = T[l].right;
                        else T[p].right = T[l].right;
                        T[T[l].right].parent = p;
                        T[l].parent = T[l].left = T[l].right = -1;
                    }
                }
            }

        }
        else if (command[0] == 'p') {
            in(T, h);
            printf("\n");
            pre(T, h);
            printf("\n");
        }
    }

    return 0;
}
