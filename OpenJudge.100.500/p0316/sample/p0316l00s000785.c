#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int value;
    struct node* parent;
    struct node* left;
    struct node* right;
};

static struct node* insert(struct node* root, int value) {
    struct node *x, *y;
    x = root;
    y = NULL;
    while (x != NULL) {
        y = x;  // 親を覚えておく
        if (value < x->value) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    x = (struct node*)malloc(sizeof(struct node));
    x->value = value;
    x->parent = y;
    x->left = x->right = NULL;

    if (y == NULL) {
        return x;
    } else if (x->value < y->value) {
        y->left = x;
    } else {
        y->right = x;
    }
    return root;
}
static void print_in_order(struct node* root) {
    if (root->left != NULL) {
        print_in_order(root->left);
    }
    printf(" %d", root->value);
    if (root->right != NULL) {
        print_in_order(root->right);
    }
}
static void print_pre_order(struct node* root) {
    printf(" %d", root->value);
    if (root->left != NULL) {
        print_pre_order(root->left);
    }
    if (root->right != NULL) {
        print_pre_order(root->right);
    }
}
static void eFgets(char* buf, size_t size, FILE* fp) {
    if (fgets(buf, size, fp) == NULL) {
        fprintf(stderr, "fgets error:%s\n", strerror(errno));
        exit(1);
    }
    // LF削除
    buf[strlen(buf) - 1] = '\0';
    // CR削除
    if (buf[strlen(buf) - 1] == '\r') {
        buf[strlen(buf) - 1] = '\0';
    }
}
int main(int argc, char const* argv[]) {
    struct node* root;
    char buf[255];

    fgets(buf, sizeof(buf), stdin);
    int m = atoi(buf);

    root = NULL;
    for (int i = 0; i < m; i++) {
        fgets(buf, sizeof(buf), stdin);
        if (buf[0] == 'i') {
            int v = atoi(&buf[7]);
            root = insert(root, v);
        } else {
            print_in_order(root);
            puts("");
            print_pre_order(root);
            puts("");
        }
    }
    return 0;
}

