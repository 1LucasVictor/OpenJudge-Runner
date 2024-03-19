#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node Node;

struct Node{
    int data;
    Node *parent;
    Node *left;
    Node *right;
};

void initNode(Node*);
Node copyNode(Node*,Node*);
void insert(Node*,Node*[],int);
void printTree(Node*);
int find(Node*,int);
void inorder(Node*);
void preorder(Node*);


int main(int argc, char** argv) {
    int commandSize;
    scanf("%d",&commandSize);
    Node *tree[commandSize-1];
    for(int i = 0; i < commandSize; i++)
        tree[i] = NULL;
    int loc = 0;
    int findVal;
    Node temp[commandSize-1];
    char cmd[7];
    for(int i = 0; i < commandSize; i++){
        initNode(&temp[i]);
        scanf("%s",cmd);
        if(!strcmp(cmd,"insert")){
            scanf("%d", &temp[i].data);
            insert(&temp[i],tree,loc++);
        }
        else if(!strcmp(cmd,"print")){
            for(int j = 0; j < loc; j++)
                tree[j] = &temp[j];
            printTree(tree[0]);
        }
        else{
            scanf("%d",&findVal);
            for(int j = 0; j < loc; j++)
                tree[j] = &temp[j];
            if(find(tree[0],findVal))
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return (EXIT_SUCCESS);
}

void initNode(Node *n){
    n->data = NULL;
    n->parent = NULL;
    n->left = NULL;
    n->right = NULL;
}

void insert(Node *node, Node *tree[], int loc){
    Node *parent = NULL;
    Node *current = tree[0];
    while(current != NULL){
        parent = current;
        if(node->data < current->data)
            current = current->left;
        else
            current = current->right;
    }
    node->parent = parent;
    if(parent == NULL){
        tree[loc] = node;
    }
    else if(node->data < parent->data){
        tree[loc] = node;
        parent->left = tree[loc];
    }
    else{
        tree[loc] = node;
        parent->right = tree[loc];
    }
}

Node copyNode(Node *dest, Node *orig){
    dest->data = orig->data;
    dest->parent = orig->parent;
    dest->left = orig->left;
    dest->right = orig->right;
}

void printTree(Node *root){
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
}

int find(Node *root, int val){
    if(root != NULL){
        if(val < root->data)
            return find(root->left,val);
        else if(val > root->data)
            return find(root->right,val);
        else if(val == root->data)
            return 1;
    }
    else
        return 0;
}

void inorder(Node *root){
    if(root->left != NULL)
        inorder(root->left);
    printf(" %d", root->data);
    if(root->right != NULL)
        inorder(root->right);
}

void preorder(Node *root){
    printf(" %d", root->data);
    if(root->left != NULL)
        preorder(root->left);
    if(root->right != NULL)
        preorder(root->right);
}

