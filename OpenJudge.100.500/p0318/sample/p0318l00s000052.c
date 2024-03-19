#include <stdio.h>
#include <string.h>

#define N 500000

typedef struct _Node {
    long key;
    struct _Node *parent, *left, *right;
} Node_t;
Node_t T[N];

Node_t *root=NULL;

void insert(Node_t *z) {
    Node_t *p=NULL, *x;
    x = root;
    while (x != NULL) {
        p = x;
        if(z->key < x->key) x = x->left;
        else x = x->right;
    }
    z->parent = p ;
    if(p == NULL) root = z;
    else if (z->key < p->key) p->left = z;
    else p->right = z;
}

void find(int key) {
    Node_t *x=root;
    while (x != NULL) {
        if(x->key == key) {
            printf("yes\n");
            return;
        } else {
            if(key < x->key) x = x->left;
            else x = x->right;
        }
    }
    printf("no\n");
}

Node_t *findNode(int key) {
    Node_t *x=root;
    while (x != NULL) {
        if(x->key == key) {
            return x;
        } else {
            if(key < x->key) x = x->left;
            else x = x->right;
        }
    }
    return x;
}

void delete(Node_t *x) {
    if(x == NULL) return;

    if(x->left == NULL && x->right == NULL) {
        if(x->parent->left == x) x->parent->left = NULL;
        else if(x->parent->right == x) x->parent->right = NULL;
    } else if(x->left == NULL) {
        if(x->parent->left == x) {
            x->parent->left = x->right;
            x->right->parent = x->parent;
        } else if(x->parent->right == x) {
            x->parent->right = x->right;
            x->right->parent = x->parent;
        }
    } else if(x->right == NULL) {
        if(x->parent->left == x) {
            x->parent->left = x->left;
            x->right->parent = x->parent;
        } else if(x->parent->right == x) {
            x->parent->right = x->left;
            x->right->parent = x->parent;
        }
    } else {
        x->key = x->right->key;
        delete(x->right);
    }
}

void Preorder(Node_t *root) {
    if(root == NULL) return;
    printf(" %ld", root->key);
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(Node_t *root) {
    if(root == NULL) return;
    Inorder(root->left);
    printf(" %ld", root->key);
    Inorder(root->right);
}

int main(){
    int i;

    int n;
    long in;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        char command[10];
        scanf("%s", command);
        if(strcmp(command, "insert") == 0){
            scanf("%d", &in);
            T[i].key = in;
            insert(&T[i]);
        } else if(strcmp(command, "print") == 0){
            Inorder(root);
            printf("\n");
            Preorder(root);
            printf("\n");
        } else if(strcmp(command, "find") == 0){
            scanf("%d", &in);
            find(in);
        } else if(strcmp(command, "delete") == 0){
            scanf("%d", &in);
            delete(findNode(in));
        }
    }
    return 0;
}

