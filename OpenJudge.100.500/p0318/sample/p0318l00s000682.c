#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *parent;
    struct node *left;
    struct node *right;
};
typedef struct node *NodePointer;

NodePointer root = NULL;

void initNode(NodePointer nd, NodePointer parent, int key) {
    nd->parent = parent;
    nd->key = key;
    nd->left = NULL;
    nd->right = NULL;
}

// キーを元に探し、含まれるノードを返します
// 無い場合は最後のノードを返します
// @param int key
// @return pointer
NodePointer search(int key) {
    NodePointer target = root;
    NodePointer result = NULL;

    while (target != NULL) {
        result = target;

        if (key < target->key) {
            target = target->left;
        } else if (key == target->key) {
            break;
        } else {
            target = target->right;
        }
    }
    return result;
}

NodePointer minimum(NodePointer n) {
    while (n->left != NULL) {
        n = n->left;
    }
    return n;
}

NodePointer successor(NodePointer n) {
    NodePointer parent;
    // case 1
    if (n->right != NULL) {
        return minimum(n->right);
    }
    // case 2
    parent = n->parent;
    while (parent != NULL && n == parent->right) {
        n = parent;
        parent = parent->parent;
    }
    return parent;
}

NodePointer find(int key) {
    NodePointer result = search(key);
    return (result->key == key) ? result : NULL;
}

void delete(int key) {
    NodePointer target = find(key);
    NodePointer child;
    int *newKey;

    if (target->left != NULL && target->right != NULL) {
        newKey = &target->key;
        target = successor(target);
        *newKey = target->key;
    }

    if (target->left != NULL) {
        child = target->left;
    } else {
        child = target->right;
    }

    if (child != NULL) {
        child->parent = target->parent;
    }

    if (target->parent == NULL) {
        root = child;
    }
    else if (target == target->parent->left) {
        target->parent->left = child;
    }
    else {
        target->parent->right = child;
    }

}

void insert(int key) {
    NodePointer nd = (NodePointer)malloc(sizeof(struct node));
    NodePointer parent = NULL;

    parent = search(key);
    initNode(nd, parent, key);

    if (root == NULL) {
        root = nd;
    }
    else if (key < parent->key) {
        parent->left = nd;
    }
    else {
        parent->right = nd;
    }
}

void inorder(NodePointer n){
    if(n == NULL){
        return;
    } else {
        inorder(n->left);
        printf(" %d", n->key);
        inorder(n->right);
    }
}

void preorder(NodePointer n) {
    if(n == NULL){
        return;
    } else {
        printf(" %d", n->key);
        preorder(n->left);
        preorder(n->right);
    }
}

int main() {
    int n, input, i;
    char command[10];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%9s", command);

        switch (command[0]) {
            case 'i':
                scanf("%d", &input);
                insert(input);
                break;
            case 'f':
                scanf("%d", &input);
                printf("%s\n", (find(input) == NULL) ? "no" : "yes");
                break;
            case 'd':
                scanf("%d", &input);
                delete(input);
                break;
            case 'p':
                inorder(root);
                printf("\n");
                preorder(root);
                printf("\n");
                break;
        }
    }
}
