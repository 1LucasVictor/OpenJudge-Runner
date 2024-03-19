#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int id;
    int parent;
    int left;
    int right;
};

static int FindRoot(const struct Node nodes[], int n) {
    int i;

    for ( i = 0; i < n; i++ ) {
        if ( nodes[i].parent == -1 ) {
            return i;
        }
    }

    return -1;
}

static void WalkPreorder(int root, const struct Node nodes[]) {

    printf(" %d", nodes[root].id);
    if ( nodes[root].left != -1 ) {
        WalkPreorder(nodes[root].left, nodes);
    }
    if ( nodes[root].right != -1 ) {
        WalkPreorder(nodes[root].right, nodes);
    }

    return;
}

static void WalkInorder(int root, const struct Node nodes[]) {

    if ( nodes[root].left != -1 ) {
        WalkInorder(nodes[root].left, nodes);
    }
    printf(" %d", nodes[root].id);
    if ( nodes[root].right != -1 ) {
        WalkInorder(nodes[root].right, nodes);
    }

    return;
}

static void WalkPostorder(int root, const struct Node nodes[]) {

    if ( nodes[root].left != -1 ) {
        WalkPostorder(nodes[root].left, nodes);
    }
    if ( nodes[root].right != -1 ) {
        WalkPostorder(nodes[root].right, nodes);
    }
    printf(" %d", nodes[root].id);

    return;
}

int main(void) {
    int n, i;
    struct Node* nodes;

    scanf("%d\n", &n);
    nodes = malloc(sizeof(struct Node) * n);
    for ( i = 0; i < n; i++ ) {
        nodes[i].parent = -1;
    }

    for ( i = 0; i < n; i++ ) {
        int id, left, right;
        scanf("%d %d %d\n", &id, &left, &right);

        nodes[id].id = id;
        nodes[id].left = left;
        nodes[id].right = right;

        if ( left != -1 ) {
            nodes[left].parent = id;
        }
        if ( right != -1 ) {
            nodes[right].parent = id;
        }
    }

    int root = FindRoot(nodes, n);
    printf("Preorder\n");
    WalkPreorder(root, nodes);
    printf("\n");

    printf("Inorder\n");    
    WalkInorder(root, nodes);
    printf("\n");

    printf("Postorder\n");
    WalkPostorder(root, nodes);
    printf("\n");
    
    free(nodes);

    return 0;
}

