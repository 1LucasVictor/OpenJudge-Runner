#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ Node;

struct Node_
{
    int key;
    Node* parent;
    Node* left;
    Node* right;
};

Node* root;

static void insert(int key)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->key = key;
    node->parent = NULL;
    node->left = NULL;
    node->right = NULL;

    Node* parent = NULL;
    Node* cur = root;
    while (cur != NULL) {
        parent = cur;
        if (node->key < cur->key) {
            cur = cur->left;
        } else {
            cur = cur->right;
        }
    }

    node->parent = parent;

    if (parent == NULL) {
        root = node;
    } else {
        if (node->key < parent->key) {
            parent->left = node;
        } else {
            parent->right = node;
        }
    }
}

static void printInorder(Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf(" %d", node->key);
    printInorder(node->right);
}

static void printPreorder(Node* node)
{
    if (node == NULL)
        return;
    printf(" %d", node->key);
    printPreorder(node->left);
    printPreorder(node->right);
}

static void printTree()
{
    printInorder(root);
    printf("\n");
    printPreorder(root);
    printf("\n");
}

static void freeTree(Node* node)
{
    if (node->left != NULL) {
        freeTree(node->left);
    }
    if (node->right != NULL) {
        freeTree(node->right);
    }
    free(node);
}

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char command[10];
        scanf("%s", command);

        if (command[0] == 'i') {
            int key;
            scanf("%d", &key);
            insert(key);
        } else if (command[0] == 'p') {
            printTree();
        }
    }

    freeTree(root);
    return 0;
}
