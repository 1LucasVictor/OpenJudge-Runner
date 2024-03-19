#include <stdio.h>

#define MAX 10000
#define NIL -1

struct Node {
    int p, left, right;
};

struct Node T[MAX];
int n;

void Preorder(int);
void Inorder(int);
void Postorder(int);


int main() {
    int i, v, l, r, root = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        T[i].p = NIL;
    }

    for (i = 0; i < n; i++) {
        scanf("%d%d%d", &v, &l, &r);
        T[v].left = l;
        T[v].right = r;
        if (l != NIL) T[l].p = v;
        if (r != NIL) T[r].p = v;
    }

    for (i = 0; i < n; i++) {
        if (T[i].p == NIL) root = i;
    }

    printf("Preorder\n");
    Preorder(root);
    printf("\n");
    printf("Inorder\n");
    Inorder(root);
    printf("\n");
    printf("Postorder\n");
    Postorder(root);
    printf("\n");

    return 0;
}


void Preorder(int u) {
    if (u == NIL) return;

    printf(" %d", u);
    Preorder(T[u].left);
    Preorder(T[u].right);
}

void Inorder(int u) {
    if (u == NIL) return;

    Inorder(T[u].left);
    printf(" %d", u);
    Inorder(T[u].right);
}

void Postorder(int u) {
    if (u == NIL) return;

    Postorder(T[u].left);
    Postorder(T[u].right);
    printf(" %d", u);
}
