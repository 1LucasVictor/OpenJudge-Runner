#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//============================================================================
#define pred(x) ((x)-1)
#define succ(x) ((x)+1)
//============================================================================
struct Node{
    long key;
    struct Node *parent;
    struct Node *left, *right;
};
typedef struct Node TNode;
//============================================================================
//============================================================================
//============================================================================
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
TNode *nodealloc(void)
{
    TNode *node;
    node=malloc(sizeof(TNode));
    if (node==NULL){
        fprintf(stderr, "not enough memry\n");
        exit(1);
    }
    memset(node, 0, sizeof(TNode));
    return node;
}
//----------------------------------------------------------------------------
TNode *existid(TNode *node, long key)
{
    TNode *nd;

    if (node==NULL || node->key==key)
        return node;
    if ((nd=existid(node->left, key))!=NULL)
        return nd;
    nd=existid(node->right, key);
    return nd;
}
//----------------------------------------------------------------------------
void insertnode(TNode **T, TNode *z)
{
    TNode *x,*y;

    y = NULL;   // x ??????
    x = *T;      //'T ??????'
    while(x!=NULL){         // ??? NIL
        y = x;              // ???????¨????
        if (z->key < x->key)
            x = x->left;    // ?????????????§????
        else
            x = x->right;   // ?????????????§????
    }
    z->parent = y;
    if (y == NULL)          // T ???????????´???
        *T=z;               //'T ??????' = z
    else
    if (z->key < y->key)
        y->left = z;        // z ??? y ?????????????????????
    else
        y->right = z;       // z ??? y ?????????????????????
}
//----------------------------------------------------------------------------
TNode *rootnode(TNode *node)
{
    while(node->parent)
        node=node->parent;
    return node;
}
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
short depth(TNode *node)
{
    short n;

    for (n=0; node->parent!=NULL; n++)
        node=node->parent;
    return n;
}
//----------------------------------------------------------------------------
short height(TNode *node)
{
    short l,r;

    if (node==NULL)
        return -1;
    l=succ(height(node->left));
    r=succ(height(node->right));
    return (r<l)?l:r;
}
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
void preorder(TNode *node)
{
    if (node==NULL)
        return;
    printf(" %d", node->key);
    preorder(node->left);
    preorder(node->right);
}
//----------------------------------------------------------------------------
void inorder(TNode *node)
{
    if (node==NULL)
        return;
    inorder(node->left);
    printf(" %d", node->key);
    inorder(node->right);
    //printf(" %d", node->key);
}
//----------------------------------------------------------------------------
void postorder(TNode *node)
{
    if (node==NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    printf(" %d", node->key);
}
//----------------------------------------------------------------------------
void treewalk(TNode *node, short n)
{
    printf("Preorder\n");
    preorder(node);
    printf("\nInorder\n");
    inorder(node);
    printf("\nPostorder\n");
    postorder(node);
    printf("\n");
}
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
void input(FILE *file)
{
    long i,n,m; TNode *root,*node; char buffer[20];

    fgets(buffer, sizeof(buffer)-1, file);
    sscanf(buffer, "%ld", &n);
    root=NULL;//nodealloc();;
    for (i=0; i<n; i++){
        fgets(buffer, sizeof(buffer)-1, file);
        switch(*buffer){
            case 'i':   sscanf(buffer+7, "%ld", &m);
                        node=nodealloc();
                        node->key=m;
                        insertnode(&root, node);
                    break;
            case 'p':   inorder(root);
                        printf("\n");
                        preorder(root);
                        printf("\n");
                    break;
            case 'f':   sscanf(buffer+5, "%ld", &m);
                        if (existid(root, m))
                            printf("yes\n");
                        else
                            printf("no\n");
                    break;
        }
    }
}
//============================================================================
#ifndef DESKTOP
int main()
{
    input(stdin);
    return 0;
}
#endif