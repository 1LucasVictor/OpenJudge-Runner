#include <stdio.h>
#include <stdlib.h>


// I/O
int get_int() {
    int n = 0;
    int c = getchar_unlocked();
    if(c == 45) {
        c = getchar_unlocked();
        while(47 < c && c < 58) n = 10 * n + (c & 0xf), c = getchar_unlocked();
        return -n;
    } else if(c < 48 || 57 < c) return c;
    while(47 < c && c < 58) n = 10 * n + (c & 0xf), c = getchar_unlocked();
    return n;
}
int get_str(char *str) {
    int c;
    while((c = getchar_unlocked()) > 32) *str++ = (char)c;
    *str = 0;
    return c;
}
void put_int(int n) {
    if(!n) {
        putchar_unlocked('0');
        return;
    }
    if(n < 0) n = -n, putchar_unlocked('-');
    char buf[11];
    int i = 0;
    while(n) buf[i++] = (char)(n % 10 + '0'), n /= 10;
    while(i--)putchar_unlocked(buf[i]);
}
void put_str(char *str) { while(*str) putchar_unlocked(*str++); }
//


// Binary Search Tree
typedef struct Node {
    int key;
    struct Node *left, *right;
} Node;
typedef struct BST {
    Node *root;
    size_t size;
} BST;
void bst_init(BST *BST) {
    BST->root = NULL;
    BST->size = 0;
}
void bst_insert(BST *BST, int key) {
    Node *new_node = malloc(sizeof(Node));
    new_node->key = key;
    new_node->left = NULL;
    new_node->right = NULL;
    Node *tmp;
    Node *root = BST->root;
    while(root != NULL) {
        tmp = root;
        if(key < root->key) root = root->left;
        else root = root->right;
    }
    if(BST->size == 0) BST->root = new_node;
    else if(key < tmp->key) tmp->left = new_node;
    else tmp->right = new_node;
    BST->size++;
}
Node *bst_find(const Node *root, const int key) {
    while(root != NULL && root->key != key) {
        if(key < root->key) root = root->left;
        else root = root->right;
    }
    return root;
}
Node *bst_get_min(Node *root) {
    while(root->left != NULL) root = root->left;
    return root;
}
Node *bst__delete(Node *root, int key) {
    if(root == NULL) return NULL;
    if(key < root->key) root->left = bst__delete(root->left, key);
    else if(key > root->key) root->right = bst__delete(root->right, key);
    else if(root->left && root->right) {
        Node *tmp = bst_get_min(root->right);
        root->key = tmp->key;
        root->right = bst__delete(root->right, tmp->key);
    } else {
        Node *tmp = root;
        if(root->left) root = root->left;
        else if(root->right) root = root->right;
        else root = NULL;
        free(tmp);
    }
    return root;
}
void bst_delete(BST *BST, int key) {
    bst__delete(BST->root, key);
    BST->size--;
}
void bst_inorder(Node *root) {
    if(root == NULL) return;
    bst_inorder(root->left);
    putchar_unlocked(' '), put_int(root->key);
    bst_inorder(root->right);
}
void bst_preorder(Node *root) {
    if(root == NULL) return;
    putchar_unlocked(' '), put_int(root->key);
    bst_preorder(root->left);
    bst_preorder(root->right);
}
//


int main(int argc, char **argv) {
    BST BST;
    bst_init(&BST);
    int m = get_int();
    int key;
    char c[8];
    for(int i = 0; i < m; ++i) {
        get_str(c);
        switch(*c) {
        case 'i':
            key = get_int();
            bst_insert(&BST, key);
            break;
        case 'f':
            key = get_int();
            put_str(bst_find(BST.root, key) ? "yes\n" : "no\n");
            break;
        case 'd':
            key = get_int();
            bst_delete(&BST, key);
            break;
        default:
            bst_inorder(BST.root);
            putchar_unlocked('\n');
            bst_preorder(BST.root);
            putchar_unlocked('\n');
            break;
        }
    }
    return 0;
}

