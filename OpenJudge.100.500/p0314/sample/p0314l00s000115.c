#include <stdio.h>

#define MAX 25
#define NIL -1

typedef struct Node_
{
    int parent;
    int left;
    int right;
} Node;

Node Tree[MAX];

static void preOrder(int i)
{
    if (i == NIL)
        return;
    printf(" %d", i);
    preOrder(Tree[i].left);
    preOrder(Tree[i].right);
}

static void inOrder(int i)
{
    if (i == NIL)
        return;
    inOrder(Tree[i].left);
    printf(" %d", i);
    inOrder(Tree[i].right);
}

static void postOrder(int i)
{
    if (i == NIL)
        return;
    postOrder(Tree[i].left);
    postOrder(Tree[i].right);
    printf(" %d", i);
}

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        Tree[i].parent = NIL;
    }

    for (int i = 0; i < n; i++) {
        int id, left, right;
        scanf("%d %d %d", &id, &left, &right);
        Tree[id].left = left;
        Tree[id].right = right;
        if (left != NIL)
            Tree[left].parent = id;
        if (right != NIL)
            Tree[right].parent = id;
    }

    int root = NIL;
    for (int i = 0; i < n; i++) {
        if (Tree[i].parent == NIL) {
            root = i;
            break;
        }
    }

    if (root != NIL) {
        printf("Preorder\n");
        preOrder(root);
        printf("\n");
        printf("Inorder\n");
        inOrder(root);
        printf("\n");
        printf("Postorder\n");
        postOrder(root);
        printf("\n");
    }

    return 0;
}
