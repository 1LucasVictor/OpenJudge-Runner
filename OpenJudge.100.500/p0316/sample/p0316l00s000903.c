#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    struct Node* parent;
    struct Node* left;
    struct Node* right;
    int key;
};

static struct Node* Insert(struct Node* tree, struct Node* z) {
    struct Node* ret = NULL;
    struct Node* y = NULL;
    struct Node* x = tree;

    while ( x != NULL ) {
        y = x;
        if ( z->key < x->key ) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    z->parent = y;

    if ( y == NULL ) {
        ret = z;
    } else if ( z->key < y->key ) {
        y->left = z;
        ret = tree;
    } else {
        y->right = z;
        ret = tree;
    }

    return ret;
}

static void PrintInorder(struct Node* tree) {

    if ( tree == NULL ) {
        return;
    }

    PrintInorder(tree->left);
    printf(" %d", tree->key);
    PrintInorder(tree->right);

    return;
}

static void PrintPreorder(struct Node* tree) {
    if ( tree == NULL ) {
        return;
    }

    printf(" %d", tree->key);
    PrintPreorder(tree->left);
    PrintPreorder(tree->right);

    return;
}

static struct Node* CreateNode(int key) {
    struct Node* p_node = malloc(sizeof(struct Node));

    p_node->parent = NULL;
    p_node->left   = NULL;
    p_node->right  = NULL;
    p_node->key    = key;

    return p_node;
}

static void DestroyNode(struct Node* p_node) {
    free(p_node);

    return;
}

static void DestroyTree(struct Node* tree) {
    if ( tree == NULL ) {
        return;
    }

    DestroyTree(tree->left);
    DestroyTree(tree->right);
    DestroyNode(tree);

    return;
}

int main(int argc, char* argv[]) {
    int m;
    int i;
    char order[16];
    struct Node* tree = NULL;

    scanf("%d\n", &m);

    for ( i = 0; i < m; i++ ) {
        int key;        
        scanf("%s %d\n", order, &key);
        if ( order[0] == 'i' ) {
            struct Node* p_node = CreateNode(key);
            tree = Insert(tree, p_node);
        } else if ( order[0] == 'p' ) {
            PrintInorder(tree);
            printf("\n");
            PrintPreorder(tree);
            printf("\n");            
        }
    }

    DestroyTree(tree);

    return 0;
}


