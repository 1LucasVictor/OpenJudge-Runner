#include<stdio.h>

#define MAX 100000
#define NIL -1

void Preorder(int);
void Inorder(int);
void Postorder(int);

typedef struct{
    int p;
    int l;
    int r;
}Node;

Node T[MAX];

void Pre(int);
void In(int);
void Post(int);

int main()
{
    int n, r, node, c;
    int i, j;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++) T[i].p = T[i].l = T[i].r = NIL;
    
    for(i=0; i<n; i++){
        scanf("%d", &node);
        for(j=0; j<2; j++){
            scanf("%d", &c);
            if(c != NIL){
                T[c].p = node;
                if(j==0) T[node].l = c;
                else T[node].r = c;
            }
        }
    }
    
    for(i=0; i<n; i++){
        if(T[i].p == NIL) r = i;
    }
    
    printf("Preorder\n");
    Preorder(r);
    printf("\n");
    printf("Inorder\n");
    Inorder(r);
    printf("\n");
    printf("Postorder\n");
    Postorder(r);
    printf("\n");
    
    return 0;
}

void Preorder(int r)
{
    printf(" %d", r);
    if(T[r].l != NIL) Preorder(T[r].l);
    if(T[r].r != NIL) Preorder(T[r].r);
}

void Inorder(int r)
{
    if(T[r].l != NIL) Inorder(T[r].l);
    printf(" %d", r);
    if(T[r].r != NIL) Inorder(T[r].r);
}

void Postorder(int r)
{
    if(T[r].l != NIL) Postorder(T[r].l);
    if(T[r].r != NIL) Postorder(T[r].r);
    printf(" %d", r);
}