#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NIL -1

struct Node {
    int key;
    struct Node *parent, *left, *right;
};

struct Node *root = NULL;

void freeNode(struct Node *target) {
    if (target == NULL) return;
    if (target->left != NULL) freeNode(target->left);
    if (target->right != NULL) freeNode(target->right);
    free(target);
}

int findNode(int key, struct Node *target) {
    if (target == NULL) return 0;

    if (key == target->key) {
        return 1;

    } else if (key < target->key) {
        return findNode(key, target->left);

    } else {
        return findNode(key, target->right);
    }
}

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
        // printf("%s\n", command);

        if (command[0] == 'i') {
            scanf("%d", &key);
            insertTree(createNode(key));

        } else if (command[0] == 'f') {
            scanf("%d", &key);
            if (findNode(key, root)) printf("yes\n");
            else printf("no\n");

        } else {
            printInOrderTree(root);
            printf("\n");
            printPreOrderTree(root);
            printf("\n");
        }
    }

    //freeNode(root);

    return 0;
}

