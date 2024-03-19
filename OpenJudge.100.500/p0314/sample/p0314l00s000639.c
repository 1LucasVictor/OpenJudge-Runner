#include <stdio.h>
#include <stdlib.h>
struct node {
    int item;
    int left; int right;
};

void preorder(struct node T[], int u);
void inorder(struct node T[], int u);
void postorder(struct node T[], int u);

int main(void) {
    int n, i, k, h;
    scanf("%d", &n);
    struct node *T;
    T = malloc(sizeof(struct node) * n);
    for (k = 0; k < n; k++) {
        scanf("%d", &i);
        if (k == 0) h = i;
        scanf("%d %d", &((T + i)->left), &((T + i)->right));
    }

    printf("Preorder\n");
    preorder(T, h);
    printf("\nInorder\n");
    inorder(T, h);
    printf("\nPostorder\n");
    postorder(T, h);
    printf("\n");
    free(T);

    return 0;
}

void preorder(struct node T[], int u) {
    if (u == -1) return;
    printf(" %d", u);
    preorder(T, T[u].left);
    preorder(T, T[u].right);
}
void inorder(struct node T[], int u) {
    if (u == -1) return;
    inorder(T, T[u].left);
    printf(" %d", u);
    inorder(T, T[u].right);
}
void postorder(struct node T[], int u) {
    if (u == -1) return;
    postorder(T, T[u].left);
    postorder(T, T[u].right);
    printf(" %d", u);
}