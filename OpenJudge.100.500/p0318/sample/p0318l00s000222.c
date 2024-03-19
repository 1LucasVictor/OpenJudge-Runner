#include <stdio.h>
#include <stdlib.h>
 
struct node_t {
    int key;
    struct node_t *parent;
    struct node_t *left;
    struct node_t *right;
};
typedef struct node_t Node;
 
Node *tree_insert(Node *top, Node *z) {
    Node *y, *x;
 
    y = NULL;
    x = top;
    while (x != NULL) {
        y = x;
        if (z->key < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    z->parent = y;
    if (y == NULL) {
        top = z;
    } else if (z->key < y->key) {
        y->left = z;
    } else {
        y->right = z;
    }
    return top;
}
 
Node *tree_find(Node *node, int key) {
    if (node == NULL)
        return NULL;
    if (node->key == key)
        return node;
    if (key < node->key)
        return tree_find(node->left, key);
    return tree_find(node->right, key);
}
 
Node *tree_minimum(Node *x) {
    while (x->left != NULL) {
        x = x->left;
    }
    return x;
}
 
Node *tree_successor(Node *x) {
    Node *y;
 
    if (x->right != NULL) {
        return tree_minimum(x->right);
    }
    y = x->parent;
    while (y != NULL && x == y->right) {
        x = y;
        y = y->parent;
    }
    return y;
}
 
Node *tree_delete(Node *top, Node *z) {
    Node *y, *x;
 
    if (z->left == NULL || z->right == NULL) {
        y = z;
    } else {
        y = tree_successor(z);
    }
 
    if (z->left != NULL) {
        x = y->left;
    } else {
        x = y->right;
    }
 
    if (x != NULL) {
        x->parent = y->parent;
    }
    if (y->parent == NULL) {
        top = x;
    } else if (y == y->parent->left) {
        y->parent->left = x;
    } else {
        y->parent->right = x;
    }
 
    if (y != z) {
        z->key = y->key;
    }
    return top;
}
 
void inorder_walk(Node *node) {
    if (node->left != NULL) {
        inorder_walk(node->left);
    }
    printf(" %d", node->key);
    if (node->right != NULL) {
        inorder_walk(node->right);
    }
}
 
void preorder_walk(Node *node) {
    printf(" %d", node->key);
    if (node->left != NULL) {
        preorder_walk(node->left);
    }
    if (node->right != NULL) {
        preorder_walk(node->right);
    }
}
 
int main(void) {
    int n, i, key;
    char cmd[20];
    Node *top = NULL, *p;
 
    scanf("%d ", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d ", cmd, &key);
        if (cmd[0] == 'i') {
            p = malloc(sizeof(Node));
            p->key = key;
            p->parent = p->left = p->right = NULL;
            top = tree_insert(top, p);
        } else if (cmd[0] == 'f') {
            puts(tree_find(top, key) != NULL ? "yes" : "no");
        } else if (cmd[0] == 'd') {
            p = tree_find(top, key);
            if (p != NULL) {
                top = tree_delete(top, p);
            }
            //free(p);
        } else {
            inorder_walk(top);
            putchar('\n');
            preorder_walk(top);
            putchar('\n');
        }
    }
    return 0;
}
