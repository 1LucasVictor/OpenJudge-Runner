#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int key;
    struct _node *parent;
    struct _node *left;
    struct _node *right;
}NODE;
NODE* makeNode(int x,NODE* p){
    NODE *n=(NODE*)malloc(sizeof(NODE));
    n->key=x;
    n->parent=p;
    n->left=NULL;
    n->right=NULL;
    
    return n;
}
NODE* insert(NODE *t,int x,NODE *p){
    if(t==NULL)return makeNode(x,p);

    if(t->key<x)t->right=insert(t->right,x,t);
    else t->left=insert(t->left,x,t);
    
    return t;
}
void inorder(NODE *t){
    if(t==NULL)return;
    
    if(t->left!=NULL)inorder(t->left);
    printf(" %d",t->key);
    if(t->right!=NULL)inorder(t->right);
    
    return;
}
void preorder(NODE *t){
    if(t==NULL)return;
    
    printf(" %d",t->key);
    if(t->left!=NULL)preorder(t->left);
    if(t->right!=NULL)preorder(t->right);
    
    return;
}
NODE* find(NODE *t,int x){
    if(t==NULL)return NULL;
    
    if(t->key==x)return t;
    else if(t->key<x)return find(t->right,x);
    else return find(t->left,x);
}
NODE* delete(NODE *t,NODE *d){
    if(t==NULL)return t;
    
    NODE *p,*c;
    if(d->left==NULL&&d->right==NULL){
        p=d->parent;
        if(p->left==d)p->left=NULL;
        else p->right=NULL;
        free(d);
        return t;
    }else if(d->left==NULL||d->right==NULL){
        p=d->parent;
        if(p->left==d){
            if(d->left!=NULL)c=d->left;
            else c=d->right;
            p->left=c;
        }else{
            if(d->left!=NULL)c=d->left;
            else c=d->right;
            p->right=c;
        }
        c->parent=p;
        free(d);
        return t;
    }else{
        c=d->right;
        while(c->left!=NULL)c=c->left;
        d->key=c->key;
        return delete(t,c);
    }
}
int main(void){
    NODE *root;
    root=NULL;
    
    int n;
    scanf("%d\n",&n);
    
    NODE *d;
    char com[6+1];
    int x;
    while(n--){
        scanf("%s",com);
        switch(com[0]){
            case 'i':
                //insert
                scanf("%d\n",&x);
                root=insert(root,x,NULL);
                break;
            case 'p':
                //print
                inorder(root);
                printf("\n");
                preorder(root);
                printf("\n");
                break;
            case 'f':
                scanf("%d\n",&x);
                if(find(root,x)==NULL)printf("no\n");
                else printf("yes\n");
                break;
            case 'd':
                scanf("%d\n",&x);
                d=find(root,x);
                if(d!=NULL)delete(root,d);
                break;
        }
    }
    
    return 0;
}
