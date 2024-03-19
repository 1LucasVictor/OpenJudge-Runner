#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int value;
    struct node* parent;
    struct node* left;
    struct node* right;
} Node;

typedef Node* NodePointer;

NodePointer serialize(int val) {
    NodePointer newNode = malloc(sizeof(Node));
    newNode->value = val;
    newNode->parent = NULL;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

NodePointer insert(NodePointer node, int val) {
    NodePointer currentNode = node;
    int flag = 0;
    int dir = 0;
    while(!flag) {
        if (currentNode->value > val) {
            if (currentNode->left == NULL) flag = 1;
            else currentNode = currentNode->left;
            dir = 0;
        } else if (currentNode->value < val) {
            if (currentNode->right == NULL) flag = 1;
            else currentNode = currentNode->right;
            dir = 1;
        } else {
            return node;
        }
    }

    if (dir) {
        currentNode->right = serialize(val);
        currentNode->right->parent = currentNode;
    } else {
        currentNode->left = serialize(val);
        currentNode->left->parent = currentNode;
    }

    return node;
}

void inorderPrint(NodePointer node) {
    if (node == NULL) return;
    inorderPrint(node->left);
    printf(" %d", node->value);
    inorderPrint(node->right);
}

void preorderPrint(NodePointer node) {
    if (node == NULL) return;
    printf(" %d", node->value);
    preorderPrint(node->left);
    preorderPrint(node->right);
}

void nodePrint(NodePointer node) {
    inorderPrint(node);
    printf("\n");
    preorderPrint(node);
    printf("\n");
}

int main() {
    NodePointer node = NULL;
    int n, m;
    char cmd[16];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", cmd);
        if (!strcmp(cmd, "insert")) {
            scanf("%d", &m);
            if (node == NULL) node = serialize(m);
            else insert(node, m);
        } else if (!strcmp(cmd, "print")) {
            nodePrint(node);
        }
    }
    return 0;
}

