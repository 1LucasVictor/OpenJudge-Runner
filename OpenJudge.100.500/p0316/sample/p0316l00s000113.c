#include <stdio.h>
#include <stdlib.h>

#define NIL -1

struct Node {
    int key;
    struct Node *parent, *left, *right;
};

struct Node *root = NULL;

void insertNode(struct Node *insertTarget, struct Node *insertedTarget) {
    if (insertedTarget->key > insertTarget->key) {
        if (insertedTarget->left == NULL) {
            insertedTarget->left = insertTarget;
            insertedTarget->parent = insertedTarget;
        } else {
            insertNode(insertTarget, insertedTarget->left);
        }

    } else {
        if (insertedTarget->right == NULL) {
            insertedTarget->right = insertTarget;
            insertedTarget->parent = insertedTarget;
        } else {
            insertNode(insertTarget, insertedTarget->right);
        }
    }
}

void insertTree(struct Node *target) {
    if (root == NULL) root = target;
    else insertNode(target, root);
}

void printInOrderTree(struct Node *target) {
    if (target->left != NULL) printInOrderTree(target->left);
    printf(" %d", target->key);
    if (target->right != NULL) printInOrderTree(target->right);
}

void printPreOrderTree(struct Node *target) {
    printf(" %d", target->key);
    if (target->left != NULL) printPreOrderTree(target->left);
    if (target->right != NULL) printPreOrderTree(target->right);
}

struct Node* createNode(int key) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = key;
    node->parent = NULL;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main() {
    int n;
    scanf("%d", &n);

    char command[10];
    int key;
    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (command[0] == 'i') {
            scanf("%d", &key);
            insertTree(createNode(key));

        } else {
            printInOrderTree(root);
            printf("\n");
            printPreOrderTree(root);
            printf("\n");
        }
    }

    return 0;
}

