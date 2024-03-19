#include <stdio.h>
#include <stdlib.h>

int N;

struct Node {
    int key;
    struct Node *left;
    struct Node *right;
};
typedef struct Node t_Node;

t_Node *root = NULL;

void insert(int key)
{    
    t_Node *node = root;
    t_Node *parent = NULL;
    while (node != NULL) {
        parent = node;
        if (key < node->key) {
            node = node->left;
        }
        else {
            node = node->right;
        }
    }
    
    t_Node *new = (t_Node*)malloc(sizeof(t_Node));
    new->key = key;
    new->left = NULL;
    new->right = NULL;
    
    if (parent == NULL) {
        root = new;
    }
    else if (key < parent->key) {
        parent->left = new;
    }
    else {
        parent->right = new;
    }
}

void inOrder(t_Node *node)
{
    if (node== NULL) {
        return;
    }
      
    if (node->left != NULL) {
        inOrder(node->left);
    }
    printf(" %d", node->key);  
    if (node->right != NULL) {
        inOrder(node->right);
    }
}

void preOrder(t_Node *node)
{
    if (node== NULL) {
        return;
    }
    
    printf(" %d", node->key);    
    if (node->left != NULL) {
        preOrder(node->left);
    }
    if (node->right != NULL) {
        preOrder(node->right);
    }    
}

void print()
{
    inOrder(root);
    puts("");
    preOrder(root);
    puts("");
}

int main()
{
    int i, j, k;    
    int key;
    char cmd[10];
    scanf("%d", &N);
    for (i = 0; i < N; i++) {        
        scanf("%s", cmd);
        switch (cmd[0]) {
            case 'i':
                scanf("%d", &key);
                insert(key);
                break;
            case 'p':
                print();
                break;
        }
    }
    
    return 0;
}