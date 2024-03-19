#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node Node;

struct Node{
    int id;
    int degree;
    int height;
    Node* parent;
    Node* left;
    Node* right;
    Node* sibling;
};

void initNode(Node*);
int max(int,int);
int getDepth(Node*);
int getHeight(Node*);
int getRoot(int,Node[]);
void printTree(int,Node[]);

void preorder(Node*);
void inorder(Node*);
void postorder(Node*);

int main(int argc, char** argv) {
    int size;
    scanf("%d\n", &size);
    Node tree[size];
    for(int i = 0; i < size; i++)
        initNode(&tree[i]);
    
    int loc, left, right, root;
    for(int i = 0; i < size; i++){
        scanf("%d %d %d", &loc, &left, &right);
        tree[loc].id = loc;
        if(left >= 0){
            tree[loc].left = tree+left;
            tree[left].parent = tree+loc;
            tree[loc].degree++;
        }
        if(right >= 0){
            tree[loc].right = tree+right;
            tree[right].parent = tree+loc;
            tree[loc].degree++;
        }
        if(tree[loc].left != NULL && tree[loc].right != NULL){
            tree[loc].left->sibling = tree[loc].right;
            tree[loc].right->sibling = tree[loc].left;
        }
        else if(tree[loc].left == NULL && tree[loc].right == NULL)
            tree[loc].height = 0;
    }
    
    root = getRoot(size,tree);
    printf("Preorder\n");
    preorder(&tree[root]);
    printf("\nInorder\n");
    inorder(&tree[root]);
    printf("\nPostorder\n");
    postorder(&tree[root]);
    printf("\n");
    return (EXIT_SUCCESS);
}

void initNode(Node *n){
    n->id = -1;
    n->degree = 0;
    n->height = -1;
    n->parent = NULL;
    n->left = NULL;
    n->right = NULL;
    n->sibling = NULL;
}

int max(int a, int b){
    if(a > b)
        return a;
    return b;
}

int getDepth(Node* target){
    int count = 0;
    if(target->parent != NULL){
        count++;
        count += getDepth(target->parent);
    }
    return count;
}

int getHeight(Node* target){
    int leftCount = 0;
    int rightCount = 0;
    if(target->height == -1){
        if(target->left != NULL){
            leftCount++;
            leftCount += getHeight(target->left);
        }
        if(target->right != NULL){
            rightCount++;
            rightCount += getHeight(target->right);
        }
         target->height = max(rightCount, leftCount);
    }
    return target->height;
}

int getRoot(int size, Node tree[size]){
    for(int i = 0; i < size; i++)
        if(tree[i].parent == NULL)
            return i;
}

void printTree(int size, Node tree[size]){
    int parent, sibling;
    char type[15];
    for(int i = 0; i < size; i++){
        parent = -1;
        sibling = -1;
        printf("node %d: ", i);
        if(tree[i].parent != NULL)
            parent = tree[i].parent->id;
        printf("parent = %d, ", parent);
        if(tree[i].sibling != NULL)
            sibling = tree[i].sibling->id;
        printf("sibling = %d, ", sibling);
        printf("degree = %d, ", tree[i].degree);
        printf("depth = %d, ", getDepth(&tree[i]));
        printf("height = %d, ", getHeight(&tree[i]));
        if(tree[i].parent == NULL)
            strcpy(type,"root");
        else{
            if(tree[i].degree != 0)
                strcpy(type,"internal node");
            else
                strcpy(type,"leaf");
        }
        printf("%s\n", type);
    }
}

void preorder(Node *root){
    printf(" %d", root->id);
    if(root->left != NULL)
        preorder(root->left);
    if(root->right != NULL)
        preorder(root->right);
}

void inorder(Node *root){
    if(root->left != NULL)
        inorder(root->left);
    printf(" %d", root->id);
    if(root->right != NULL)
        inorder(root->right);
}

void postorder(Node *root){
    if(root->left != NULL)
        postorder(root->left);
    if(root->right != NULL)
        postorder(root->right);
    printf(" %d", root->id);
}

