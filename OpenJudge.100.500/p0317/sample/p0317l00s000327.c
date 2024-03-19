#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int root;
    struct Node* parent;
    struct Node* leftchild;
    struct Node* rightchild;
}Node;
Node* insertTree(Node* Tree, int data)
{
    Node* y = NULL;
    Node* x = Tree;
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->root = data;
    temp->leftchild=temp->rightchild=temp->parent=NULL;
    while(x!=NULL)
    {
        y = x;
        if(temp->root < x->root){x = x->leftchild;}
        else{x = x->rightchild;}
    }
    temp->parent = y;
    if(y == NULL){Tree = temp;}
    else if(temp->root < y->root){y->leftchild = temp;}
    else{y->rightchild = temp;}
    return Tree;
}
void Preorder(Node* Tree)
{
    if(Tree==NULL)return;
    printf(" %d", Tree->root);
    Preorder(Tree->leftchild);
    Preorder(Tree->rightchild);
}
void inorder(Node* Tree)
{
    if(Tree==NULL)return;
    inorder(Tree->leftchild);
    printf(" %d", Tree->root);
    inorder(Tree->rightchild);
}
void finder(Node* Tree, int num)
{
    if(Tree==NULL){printf("no\n");return;}
    if(num==Tree->root){printf("yes\n");return;}
    else if(num>Tree->root){finder(Tree->rightchild, num);}
    else{finder(Tree->leftchild, num);}
}
int main() {
    int n;
    int node;
    int num;
    char str[10];
    Node* Tree = NULL;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%s ", str);
        if(str[0]=='i')
        {
            scanf("%d", &node);
            Tree = insertTree(Tree, node);
        }
        else if(str[0]=='f')
        {
            scanf("%d", &num);
            finder(Tree, num);
        }
        else if(str[0]=='p')
        {inorder(Tree);printf("\n");Preorder(Tree);printf("\n");}
    }
    return 0;
}

