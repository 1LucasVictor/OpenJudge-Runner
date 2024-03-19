#include<stdio.h>
#include<stdlib.h>

#define N 500000 

struct node{
    struct node *r;
    struct node *l;
    struct node *p;
    int key;
};

typedef struct node * Node ;
Node root;
 
Node treemin(Node x){
    while(x->l != NULL){
        x=x->l;
    }
    return x;
}

Node treesrh(Node u,int k){
    if(u == NULL || k == u->key)return u;
    if(k < u->key)return treesrh(u->l,k);
    else return treesrh(u->r,k);
}

Node treesuc(Node x){
    Node y;
    if(x->r != NULL)return treemin(x->r);
    y=x->p;
    while(y != NULL && x==y->r){
        x=y;
        y=y->p;
    }
    return y;
}

void treedel(Node z){
    Node y;
    Node x;
}
 
void insert(int k){
    Node y = NULL;
    Node x = root;
    Node z;

    z = malloc(sizeof(struct node));
    z->key = k;
    z->l = NULL;
    z->r = NULL;
 
    while(x != NULL){
        y = x;
        if((z->key) < (x->key)) x = x->l;
        else x = x->r;
    }
    z->p = y;
 
    if(y == NULL){
        root = z;
    }
    else if((z->key) < (y->key)){
        y->l = z;
    }
    else y->r = z;
    
    return;
}

void inorder(Node u){
    if(u->l != NULL){
        inorder(u->l);
    }

    printf(" %d",u->key);
    
    if(u->r !=NULL ){
        inorder(u->r);
    }
}
 
void preorder(Node u){
    printf(" %d",u->key);
    if(u->l != NULL){
        preorder(u->l);
    }
    if(u->r != NULL){
        preorder(u->r);
    }
}

int main(){
    int n,i,x;
    char c[10];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%s",c);
 
        if(c[0] == 'f'){
            scanf("%d",&x);
            Node a = treesrh(root,x);
      
            if(a != NULL)printf("yes\n");
            else printf("no\n");
        }
        else if(c[0] == 'i'){
            scanf("%d",&x);
            insert(x);
        }
        else if(c[0] == 'p'){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
  
    return 0;
}