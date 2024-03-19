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
node find(int);
node findnext(int);
void delete(int);
node makenode(int);
void Preorder(node);
void Inorder(node);
node successor(node);

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
        else if(com[0]=='f'){
            scanf("%d",&x);
            if(find(x)==NULL){
                printf("no\n");
            }
            else{
                printf("yes\n");
            }
        }
        else if(com[0]=='d'){
            scanf("%d",&x);
            delete(x);
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
node find(int x){
    node n;
    n=root;
    while(n!=NULL){
        if(n->key==x){
            return n;
        }
        else if(x<n->key){
            n=n->left;
        }
        else{
            n=n->right;
        }    
    }
    return NULL;
}
void delete(int x){
    node n,m;
    int tmp;
    n=find(x);
    if(n->left==NULL && n->right==NULL){
        if(n->par->key>x){
            n->par->left=NULL;
        }
        else{
            n->par->right=NULL;
        }
        free(n);
    }
    else if(n->left!=NULL && n->right!=NULL){
        m=successor(n);
        tmp=m->key;
        delete(m->key);
        n->key=tmp;
    }
    else{
        if(n->par->key>x){
            if(n->left==NULL){
                n->par->left=n->right;
                n->right->par=n->par;
            }
            else{
                n->par->left=n->left;
                n->left->par=n->par;
            }
        }
        else{
            if(n->left==NULL){
                n->par->right=n->right;
                n->right->par=n->par;
            }
            else{
                n->par->right=n->left;
                n->left->par=n->par;
            }
        }
        free(n);
    }
}
node successor(node n){
    node y;
    if(n->right!=NULL){
        n=n->right;
        while(n->left!=NULL){
            n=n->left;
        }
        return n;
    }
    y=n->par;
    while(y!=NULL && n==y->right){
        n=y;
        y=y->par;
    }
    return y;
}
