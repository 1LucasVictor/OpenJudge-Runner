#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    int key;
    struct node *parent,*left,*right;
}node;
#define N 500000

int m;
node t[N],*NIL,*root;

void insert(node *t,node *z){
    node *y=NIL;
    node *x=root;
    while(x!=NIL){
        y=x;
        if(z->key<x->key)x=x->left;
        else x=x->right;
        z->parent=y;
    }
    if(y==NIL)root=z;
    else if(z->key<y->key)y->left=z;
    else y->right=z;

}

void inparse(node *u){
  if(u==NIL)return;
  inparse(u->left);
  printf(" %d",u->key);
  inparse(u->right);
}

void preparse(node *u){
  if(u==NIL)return;
  printf(" %d",u->key);
  preparse(u->left);
  preparse(u->right);
}

int main(){
    int i,n;
    char str[6];
    node *z;

    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%s",str);
        if(strcmp(str,"insert")==0){
        
            scanf("%d",&n);
            
            z=(node *)malloc(sizeof(node));
            z->key=n;
            
            z->left=NIL;
            z->right=NIL;
            insert(t,z);
        }
        else if(strcmp(str,"print")==0){
            inparse(root); 
            printf("\n"); 
            preparse(root);
            printf("\n");  
        }
    }
    return 0;
}
