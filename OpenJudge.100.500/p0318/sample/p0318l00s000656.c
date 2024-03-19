#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ------------------------------ Node ------------------------------ */
typedef struct Node {
    int key;
    struct Node *parent, *left, *right;
} Node;

Node *root = NULL;
Node *deletedRoot = NULL;

void delete(Node*);

/* ------------------------------ Free ------------------------------ */
void freeTree(Node *target) {
    if (!target) return;
    if (target->left) freeTree(target->left);
    if (target->right) freeTree(target->right);
    free(target);
}

/* ------------------------------ Insert ------------------------------ */
void insert(Node *target, Node *node) {
    if (target->key < node->key) {
        if (node->left) {
            insert(target, node->left);
        } else {
            node->left = target;
            target->parent = node;
        }

    } else {
        if (node->right) {
            insert(target, node->right);
        } else {
            node->right = target;
            target->parent = node;
        }
    }
}

/* ------------------------------ Delete ------------------------------ */
void incorporatedDeletedTree(Node *target) {
    target->parent = NULL;
    target->left = NULL;
    target->right = NULL;
    if (!deletedRoot)  deletedRoot = target;
    else insert(target, deletedRoot);
}

void swap(Node *target, Node *node) {
    int temp = target->key;
    target->key = node->key;
    node->key = temp;
    delete(node);
}

void delete(Node *target) {
    if (target->parent) {
        /// exist parent
        if (target->left == NULL && target->right == NULL) {
            /// not exist children
            if (target == target->parent->left) target->parent->left = NULL;
            else                                target->parent->right = NULL;
            incorporatedDeletedTree(target);

        } else if (target->left != NULL && target->right != NULL) {
            /// exist children
            swap(target, target->right);

        } else if (target->left) {
            /// exist left child only
            swap(target, target->left);

        } else {
            /// exist right child only
            swap(target, target->right);
        }

    } else {
        /// target is root
        root = NULL;
        incorporatedDeletedTree(target);
    }
}

/* ------------------------------ Find ------------------------------ */
Node* find(int key, Node *target) {
    if (!target) return NULL;
    if (key == target->key)     return target;
    else if (key < target->key) return find(key, target->left);
    else                        return find(key, target->right);
}

/* ------------------------------ Create ------------------------------ */
Node* create(int key) {
    Node *node      = (Node *)malloc(sizeof(Node));

    node->key       = key;
    node->parent    = NULL;
    node->left      = NULL;
    node->right     = NULL;

    return node;
}

/* ------------------------------ Print ------------------------------ */
void printInOrderTree(Node *target) {
    if (target->left != NULL)   printInOrderTree(target->left);
    printf(" %d", target->key);
    if (target->right != NULL)  printInOrderTree(target->right);
}

void printPreOrderTree(Node *target) {
    printf(" %d", target->key);
    if (target->left != NULL)   printPreOrderTree(target->left);
    if (target->right != NULL)  printPreOrderTree(target->right);
}

/* ------------------------------ Main ------------------------------ */
int main() {
    int n;
    scanf("%d", &n);

    char command[10];
    int key;
    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (command[0] == 'i') {
            scanf("%d", &key);
            if (!root)  root = create(key);
            else        insert(create(key), root);

        } else if (command[0] == 'f') {
            scanf("%d", &key);
            if (find(key, root))        printf("yes\n");
            else                        printf("no\n");

        } else if (command[0] == 'd') {
            scanf("%d", &key);
            delete(find(key, root));

        } else {
            printInOrderTree(root);     printf("\n");
            printPreOrderTree(root);    printf("\n");
        }
    }

    /*
    freeTree(root);
    freeTree(deletedRoot);
    */

    return 0;
}

