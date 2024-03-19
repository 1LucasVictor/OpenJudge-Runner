#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct node
{
    struct node *right;
    struct node *left;
    struct node *parent;
    int key;
} Node;

Node *root, *NIL;

void insert(int);
Node *find(int, Node *);
void inorder(Node *);
void preorder(Node *);
void delete(Node *);
Node *successor(Node *);
Node *min(Node *);

int main()
{
    int m, i, k, j, con;
    char com[MAX], judge[MAX];
    char y = 'y', n = 'n';

    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%s", com);
        if (com[0] == 'f')
        {
            scanf("%d", &k);
            Node *u = find(k, root);
            if (u != NIL)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
        else if (com[0] == 'i')
        {
            scanf("%d", &k);
            insert(k);
        }
        else if (com[0] == 'p')
        {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
        else if (com[0] == 'd')
        {
            scanf("%d",&k);
            delete(find(k,root));
        }
    }
    return 0;
}

void insert(int k)
{
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node)); //ノードを作る
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL)
    {
        y = x;
        if (z->key < x->key)
        {
            x = x->left;
        }
        else
            x = x->right;
    }

    z->parent = y; //insertした値の親を設定する
    if (y == NIL)
    { //親がない場合insertした値がそのままroot
        root = z;
    }
    else
    {
        if (z->key < y->key)
        {
            y->left = z;
        }
        else
        {
            y->right = z;
        }
    }
}

Node *find(int k, Node *u)
{
    while (u != NIL && k != u->key)
    {
        if (k < u->key)
            u = u->left;
        else
            u = u->right;
    }
    return u;
}

void inorder(Node *u)
{
    if (u == NIL)
        return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u)
{
    if (u == NIL)
        return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

void delete(Node *z)
{
    Node *y; //削除する対象
    Node *x;//yの子
    
    if(z->left == NIL || z->right == NIL){
        y=z;
    }else y = successor(z);

    // yの子xを決める
    if(y->left != NIL){
        x=y->left;
    }else {
        x=y->right;
    }
    if(x!=NIL){
        x->parent=y->parent;
    }
    if(y->parent==NIL){
        root = x;
    }
    else{
        if(y==y->parent->left){
            y->parent->left = x;
        }
        else {
            y->parent->right = x;
        }
    }
    if(y!=z){
        z->key=y->key;
    }
    free(y);
}

Node *successor(Node *x){
    if(x->right != NIL) return min(x->right);
    Node *y=x->parent;
    while(y!=NIL && x==y->right){
        x=y;
        y=y->parent;
    }
    return y;
}

Node *min(Node *x){
    while(x->left!=NIL)x = x->left;
    return x;
}
