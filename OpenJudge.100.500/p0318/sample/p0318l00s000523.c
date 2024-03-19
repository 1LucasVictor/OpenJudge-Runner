#include<stdio.h>
#include<stdlib.h>

#define NIL NULL

typedef struct node{
    int key;
    struct node *l;
    struct node *r;
    struct node *p;
} Node;

typedef struct node * NodePointer;

NodePointer root;

NodePointer Minimum(NodePointer x){
    
    while(x->l != NIL) x = x->l;
    
    return x;

}

NodePointer Search(NodePointer u, int k){
    
    if(u == NIL || u->key == k) return u;
    else if(u->key > k) return Search(u->l, k);
    else if(u->key < k) return Search(u->r, k);
    
}

NodePointer Successor(NodePointer x){
    
    NodePointer y;
    
    if(x->r != NIL) return Minimum(x->r);
    
    y = x->p;
    
    while(y != NIL && x == y->r){
        x = y;
        y = y->p;
    }
    
    return y;

}

void Delete(NodePointer z){
    
    NodePointer x, y;
    
    if(z->l == NIL || z->r == NIL) y = z;
    else y = Successor(z);
    if(y->l != NIL) x = y->l;
    else x = y->r;
    if(x != NIL) x->p = y->p;
    if(y->p == NIL) root = x;
    else if(y == y->p->l) y->p->l = x;
    else y->p->r = x;
    if(y != z) z->key = y->key;

}

void Insert(int key){
    
    NodePointer x, y, z;
    
    y = NIL;
    x = root;
    
    z = malloc(sizeof(struct node));
    z->key = key;
    z->l = NIL;
    z->r = NIL;
    
    while(x != NIL){
        y = x;
        if(z->key < x->key) x = x->l;
        else x = x->r;
        z->p = y;
    }
    
    z->p = y;
    
    if(y == NIL) root = z;
    else if(z->key < y->key) y->l = z;
    else y->r = z;
    
}

void Inorder(NodePointer u){
    if(u->l != NIL) Inorder(u->l);
    printf(" %d", u->key);
    if(u->r != NIL) Inorder(u->r);
}

void Preorder(NodePointer u){
    printf(" %d", u->key);
    if(u->l != NIL) Preorder(u->l);
    if(u->r != NIL) Preorder(u->r);
}

int main(){
    int n, i, x;
    char com[10];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", com);
        if(com[0] == 'i'){
            scanf("%d", &x);
            Insert(x);
        }
        else if(com[0] == 'p'){
            Inorder(root);
            printf("\n");
            Preorder(root);
            printf("\n");
        }
        else if(com[0] == 'f'){
            scanf("%d", &x);
            NodePointer t = Search(root, x);
            if(t != NIL) printf("yes\n");
            else printf("no\n");
        }
        else if(com[0] == 'd'){
            scanf("%d", &x);
            Delete(Search(root, x));
        }
    }
    
    return 0;
}