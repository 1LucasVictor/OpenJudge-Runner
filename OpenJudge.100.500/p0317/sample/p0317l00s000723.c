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

int main()
{
    int m, i, k, j,con;
    char com[MAX],judge[MAX];
    char y='y',n='n';

    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%s", com);
        if(com[0] == 'f'){
            scanf("%d", &k);
            Node *u = find(k, root);
            if (u != NIL){
                printf("yes\n");
                // judge[con] = 'y';
                // con++;
            }
            else {
                printf("no\n");
                // judge[con] = 'n';
                // con++;
            }
        }
        else if (com[0] == 'i')
        {
            scanf("%d", &k);
            insert(k);
        }
        else if (com[0] == 'p')
        {
            //for(j=0;j<con;j++){
                // if(judge[j]==y) printf("yes\n");
                // else printf("no\n");
            // }
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
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

Node *find(int k,Node *u){
   while(u!=NIL && k!=u->key){
       if(k<u->key) u=u->left;
       else u=u->right;
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
