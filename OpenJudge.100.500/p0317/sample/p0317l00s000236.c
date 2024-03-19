#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
    int key;
    struct Node *right;
    struct Node *left;
    struct Node *parent;
};
void insert(int);
int  find(struct Node *,int);
void inorder(struct Node *);
void preorder(struct Node *);

struct Node *root,*NIL;
int y_or_n[500000];
int t=0,g=0;

int main(){
    int n,i,j,x;
    char St[10];

    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%s%d",St,&x);//プリントしたいときはxに任意の数を入力
        if(strcmp(St,"print")==0){
            if(t==0) g=1;
            else{
                for(i=0;i<t;i++){
                if(y_or_n[i]==1) printf("yes\n");
                else printf("no\n");
            }
            }
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
            t=0;
        }
        else if(strcmp(St,"insert")==0) {
            insert(x);
        }
        else{
            find(root,x);
        }   
    }
    if(g==1){
         for(i=0;i<t;i++){
            if(y_or_n[i]==1) printf("yes\n");
            else printf("no\n");
            }
    }
    return 0;
}

void insert(int k){
    struct Node *x=root;
    struct Node *y=NIL;
    struct Node *z;

    z=(struct Node *)malloc(sizeof(struct Node));
    z->key=k;
    z->left=NIL;
    z->right=NIL;

    while(x!=NIL){
        y=x;
        if(z->key < x->key){
            x=x->left;
        }
        else{
            x=x->right;
        }
    }
    z->parent=y;
    if(y==NIL){
        root=z;
    }
    else{
        if(z->key < y->key){
            y->left=z;
        }
        else{
            y->right=z;
        }
    }
}
  int find(struct Node *u,int k){
    while(u!=NIL){
        if(k==u->key){
            y_or_n[t]=1;
            t++;
            return 0;
        }
        else if(k<=u->key){
            u=u->left;
        }
        else{
            u=u->right;
        }
    }
    t++;
    y_or_n[t]=2;
    return 0;
}

void inorder(struct Node *u){
    if(u==NIL) return;
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}
void preorder(struct Node *u){
    if(u==NIL) return;
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}
