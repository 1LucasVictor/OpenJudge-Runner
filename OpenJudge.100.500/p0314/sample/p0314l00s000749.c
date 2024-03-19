#define N 25
#include <stdio.h>

struct Node {
    int parent;
    int left;
    int right;
};

struct Node T[N];

void Preorder(int n) {
    if (n == -1) {
        return;
    }
    printf(" %d", n);
    Preorder(T[n].left);
    Preorder(T[n].right);
}

void Inorder(int n) {
    if (n == -1) {
        return;
    }
    Inorder(T[n].left);
    printf(" %d", n);
    Inorder(T[n].right);    
}

void Postorder(int n) {
    if (n == -1) {
        return;
    }
    Postorder(T[n].left);
    Postorder(T[n].right);
    printf(" %d", n);      
}

int main() {
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i <= N; i++) {
        T[i].parent = -1;
    }
    for (int i = 0; i < n; i++) {
        int id, l, r;
        scanf("%d %d %d", &id, &l, &r);
        T[id].left = l;
        T[id].right = r;
        if (l != -1) {
            T[l].parent = id;
        }
        if (r != -1) {
            T[r].parent = id;
        }
    }
    int root = 0;
    for (int i = 0; i < n; i++) {
        if (T[i].parent == -1) {
            root = i;
        }
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
