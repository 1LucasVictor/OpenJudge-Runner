#include <stdio.h>

struct Tree
{
    int o;
    int left;
    int right;
};

struct Tree T[10000000];

void preorder(int u)
{
    if (u == -1) {
        return;
    }
    else {
        printf(" %d",u);
        preorder(T[u].left);
        preorder(T[u].right);
    }
}

void inorder(int u)
{
    if (u == -1) {
        return;
    }
    else {
        inorder(T[u].left);
        printf(" %d",u);
        inorder(T[u].right);
    }
}

void postorder(int u)
{
    if (u == -1) {
        return;
    }
    else {
        postorder(T[u].left);
        postorder(T[u].right);
        printf(" %d",u);
    }
}

int main() {
    int n;
    int i;
    int o,l,r;
    int start = 0;

    scanf("%d", &n);
    for (i = 0; i < n; ++i){
        T[i].o = -1;
    }
    for (i = 0; i < n; ++i) {
        scanf("%d %d %d", &o, &l, &r);
        T[o].left = l;
        T[o].right = r;
        if (l != -1) T[l].o = o;
        if (r != -1) T[r].o = o;
    }

    for (i = 0;i < n; i++) {
        if (T[i].o == -1){
            start = i;
        }
    }
    printf("Preorder\n");
    preorder(start);
    putchar('\n');
    printf("Inorder\n");
    inorder(start);
    putchar('\n');
    printf("Postorder\n");
    postorder(start);
    putchar('\n');
    return 0;
}
