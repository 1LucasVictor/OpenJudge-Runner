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

static Node* root;

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

static Node* find(int key)
{
    Node* node = root;
    while (node != NULL && node->key != key) {
        if (key < node->key) {
            node = node->left;
        } else {
            node = node->right;
        }
    }
    return node;
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

static Node* getMinimum(Node* node)
{
    Node* min = node;
    while (min->left != NULL) {
        min = min->left;
    }
    return min;
}

static Node* getSuccessor(Node* node)
{
    if (node->right != NULL)
        return getMinimum(node->right);

    Node* s = node->parent;
    while (s != NULL && node == s->right) {
        node = s;
        s = s->parent;
    }
    return s;
}

static void deleteNode(Node* node)
{
    Node* target;
    Node* child;

    if (node->left == NULL || node->right == NULL) {
        target = node;
    } else {
        target = getSuccessor(node);
    }

    if (target->left != NULL) {
        child = target->left;
    } else {
        child = target->right;
    }

    if (child != NULL)
        child->parent = target->parent;

    if (target->parent == NULL) {
        root = child;
    } else {
        if (target == target->parent->left) {
            target->parent->left = child;
        } else {
            target->parent->right = child;
        }
    }

    if (target != node)
        node->key = target->key;

    free(target);
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
        } else if (command[0] == 'f') {
            int key;
            scanf("%d", &key);
            Node* node = find(key);
            printf((node != NULL) ? "yes\n" : "no\n");
        } else if (command[0] == 'p') {
            printTree();
        } else if (command[0] == 'd') {
            int key;
            scanf("%d", &key);
            Node* node = find(key);
            if (node != NULL) {
                deleteNode(node);
            }
        }
    }
    
    freeTree(root);
    return 0;
}
