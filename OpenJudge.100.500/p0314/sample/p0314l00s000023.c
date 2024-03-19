#include <stdio.h>
#define MAX 100000
#define NIL -1
typedef struct t {
    int p;
    int l;
    int r;
}tree;
void inorder(int);
void preorder(int);
void postorder(int);
tree T[MAX];
int main() {

    int n, k, i, j, id, root;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        T[i].p = -1;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &id);
        scanf("%d", &T[id].l);
        T[T[id].l].p = id;
        scanf("%d", &T[id].r);
        T[T[id].r].p = id;
    }
    for (i = 0; i < n; i++) {
        if (T[i].p == NIL) {
            root = i;
            break;
        }
    }
    printf("Preorder\n");
    preorder(root);
    printf("\n");
    printf("Inorder\n");
    inorder(root);
    printf("\n");
    printf("Postorder\n");
    postorder(root);
    printf("\n");
    return 0;
}

void inorder(int z) {
    if (z == NIL) return;
    if (T[z].l != NIL) {
        inorder(T[z].l);
    }
    printf(" %d", z);
    if (T[z].r != NIL) {
        inorder(T[z].r);
    }
}
void preorder(int z) {
    if (z == NIL) return;
    printf(" %d", z);
    if (T[z].l != NIL) {
        preorder(T[z].l);
    }
    if (T[z].r != NIL) {
        preorder(T[z].r);
    }
}
void postorder(int z) {
    if (z == NIL) return;
    if (T[z].l != NIL) {
        postorder(T[z].l);
    }
    if (T[z].r != NIL) {
        postorder(T[z].r);
    }
    printf(" %d", z);
}
