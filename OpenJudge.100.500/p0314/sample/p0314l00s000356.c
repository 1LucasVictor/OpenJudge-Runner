#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int parent;
    int leftChild;
    int rightChild;
} Node;

typedef struct {
    Node *node;
    int num;
} Tree;

#define NL -1

bool initializeTree(Tree *tree, int num) {
    if((tree->node = malloc(num * sizeof(Node))) == NULL) {
        return false;
    }

    for(int i = 0; i < num; i++) {
        Node *ptr = &tree->node[i];
        ptr->parent = ptr->leftChild = ptr->rightChild = NL;
    }

    tree->num = num;
    return true;
}

void setParent(Tree *tree, int idx, int parent) {
    tree->node[idx].parent = parent;
}

void setLeftChild(Tree *tree, int idx, int leftChild) {
    tree->node[idx].leftChild = leftChild;
}

void setRightChild(Tree *tree, int idx, int rightChild) {
    tree->node[idx].rightChild = rightChild;
}

int getParent(Tree *tree, int idx) {
    return tree->node[idx].parent;
}

int getLeftChild(Tree *tree, int idx) {
    return tree->node[idx].leftChild;
}

int getRightChild(Tree *tree, int idx) {
    return tree->node[idx].rightChild;
}

int getRoot(Tree *tree) {
    for(int i = 0; i < tree->num; i++) {
        if(tree->node[i].parent == NL) {
            return i;
        }
    }

    return NL;
}

void terminateTree(Tree *tree) {
    free(tree->node);
    tree->node = NULL;
    tree->num = 0;
}

void printPreorder(Tree *tree, int idx) {
    if(idx != NL) {
        printf(" %d", idx);
        printPreorder(tree, getLeftChild(tree, idx));
        printPreorder(tree, getRightChild(tree, idx));
    }
}

void printInorder(Tree *tree, int idx) {
    if(idx != NL) {
        printInorder(tree, getLeftChild(tree, idx));
        printf(" %d", idx);
        printInorder(tree, getRightChild(tree, idx));
    }
}

void printPostorder(Tree *tree, int idx) {
    if(idx != NL) {
        printPostorder(tree, getLeftChild(tree, idx));
        printPostorder(tree, getRightChild(tree, idx));
        printf(" %d", idx);
    }
}

int main(void) {
    Tree tree;
    int n;

    scanf("%d", &n);

    initializeTree(&tree, n);

    for(int i = 0; i < n; i++) {
        int parent, left, right;
        scanf("%d %d %d", &parent, &left, &right);

        setLeftChild(&tree, parent, left);
        setRightChild(&tree, parent, right);
        if(left != NL) {
            setParent(&tree, left, parent);
        } if(right != NL) {
            setParent(&tree, right, parent);
        }
    }
    int root = getRoot(&tree);

    puts("Preorder");
    printPreorder(&tree, root);
    printf("\n");
    
    puts("Inorder");
    printInorder(&tree, root);
    printf("\n");
    
    puts("Postorder");
    printPostorder(&tree, root);
    printf("\n");

    terminateTree(&tree);
    return 0;
}
