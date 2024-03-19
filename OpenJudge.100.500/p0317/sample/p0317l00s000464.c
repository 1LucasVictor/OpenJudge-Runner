#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _node {
    int x;
    struct _node *parent;
    struct _node *left;
    struct _node *right;
} Node;

void set(Node *ptr, int x, Node *parent, Node *left, Node *right) {
    ptr->x = x;
    ptr->parent = parent;
    ptr->left = left;
    ptr->right = right;
}

Node *insert(Node *ptr, int x) {
    if(ptr == NULL) {
        Node *new = malloc(sizeof(Node));
        set(new, x, NULL, NULL, NULL);
        return new;
    } else if(x > ptr->x) {
        ptr->right = insert(ptr->right, x);
        ptr->right->parent = ptr;
    } else if(x < ptr->x) {
        ptr->left = insert(ptr->left, x);
        ptr->left->parent = ptr;
    } 

    return ptr;
}

Node *search(Node *ptr, int x) {
    if(ptr == NULL) {
        return NULL;
    } else if(x == ptr->x) {
        return ptr;
    } else if(x > ptr->x) {
        return search(ptr->right, x);
    } else if(x < ptr->x) {
        return search(ptr->left, x);
    }
}

void printPreorder(Node *ptr) {
    if(ptr != NULL) {
        printf(" %d", ptr->x);
        printPreorder(ptr->left);
        printPreorder(ptr->right);
    }
}

void printInorder(Node *ptr) {
    if(ptr != NULL) {
        printInorder(ptr->left);
        printf(" %d", ptr->x);
        printInorder(ptr->right);
    }
}

int main(void) {
    Node *root = NULL;

    int n;
    char buf[32];

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);

    while(n--) {
        fgets(buf, sizeof(buf), stdin);
        if(buf[0] == 'p') {
            printInorder(root);
            puts("");
            printPreorder(root);
            puts("");
        } else {
            char command[8];
            int key;
            sscanf(buf, "%s %d", command, &key);
            if(command[0] == 'i') {
                root = insert(root, key);
            } else if(command[0] == 'f') {
                puts(search(root, key) ? "yes" : "no");
            }
        }
    }

    return 0;
}
