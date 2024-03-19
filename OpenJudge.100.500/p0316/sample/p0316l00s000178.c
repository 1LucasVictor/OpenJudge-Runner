#include <stdio.h>
#include <stdlib.h>
typedef struct data *node;
struct data{
    int key;
    node par;
    node left;
    node right;
};

void insert(int);
node makenode(int);
void Preorder(node);
void Inorder(node);

node root;

int main (){
    int n,i,x;
    char com[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",com);
        if(com[0]=='i'){
            scanf("%d",&x);
            insert(x);
        }
        else if(com[0]=='p'){
            Inorder(root);
            printf("\n");
            Preorder(root);
            printf("\n");
        }
    }
    return 0;
}
void insert(int z){
    node x,y,t;
    y=NULL;
    x=root;
    while(x!=NULL){
        y=x;
        if(z<x->key){
            x=x->left;
        }
        else{
            x=x->right;
        }
    }
    t=makenode(z);
    t->par=y;
    if(y==NULL){
        root=t;
    }
    else if(z<y->key){
        y->left=t;
    }
    else{
        y->right=t;
    }
}
node makenode (int z){
    node x;
    x=(node)malloc(sizeof(struct data));
    x->key=z;
    x->left=NULL;
    x->right=NULL;
    return x;
}
void Preorder(node u){
    if(u==NULL){
        return;
    }
    printf(" %d",u->key);
    Preorder(u->left);
    Preorder(u->right);
}
void Inorder(node u){
    if(u==NULL){
        return;
    }
    Inorder(u->left);
    printf(" %d",u->key);
    Inorder(u->right);
}

