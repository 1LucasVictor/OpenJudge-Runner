#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    int key;
    struct Node* per;
    struct Node* l;
    struct Node* r;
};
typedef struct Node node;
node* insert(node* px,int k);
void printI(node* x);
void printP(node* x);
node* find(node* px,int k);
void delete(node* px,int k);
node* next(node* px);

int main(void){
    int i;
    int n,k;
    node* x=NULL;
    char com[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&com);
        if(strcmp(com,"insert")==0){
            scanf("%d",&k);
            x=insert(x,k);
        }else if(strcmp(com,"print")==0){
            printI(x);
            printf("\n");
            printP(x);
            printf("\n");
        }else if(strcmp(com,"find")==0){
            scanf("%d",&k);
            if(find(x,k)==NULL){
                printf("no\n");
            }else{
                printf("yes\n");
            }
        }else{
            scanf("%d",&k);
            delete(x,k);
        }
    }
    return 0;
}

node* insert(node* px,int k){
    node* x=px;
    node* y=NULL;
    node* z=(node*)malloc(sizeof(node));
    z->key=k;
    z->l=NULL;
    z->r=NULL;
    z->per=NULL;
    while(x!=NULL){
        y=x;
        if(z->key<x->key){
            x=x->l;
        }else{
            x=x->r;
        }
    }
    z->per=y;
    if(y==NULL){
        px=z;
    }else if(z->key<y->key){
        y->l=z;
    }else{
        y->r=z;
    }
    return px;
}

void printI(node* x){
    if(x->l != NULL){
        printI(x->l);
    }
    printf(" %d",x->key);
    if(x->r != NULL){
        printI(x->r);
    }
}

void printP(node* x){
    printf(" %d",x->key);
    if(x->l != NULL){
        printP(x->l);
    }
    if(x->r != NULL){
        printP(x->r);
    }
}

node* find(node* px,int k){
    while(1){
        if(px==NULL){
            return NULL;
        }
        if(px->key==k){
            return px;
        }
        if(px->key>k){
            px=px->l;
        }else{
            px=px->r;
        }
    }
}

void delete(node* px,int k){
    node* del;
    node* temp;
    int tk;
    del=find(px,k);
    if(del->l==NULL&&del->r==NULL){
        if(del->per->l==del){
            del->per->l=NULL;
        }else{
            del->per->r=NULL;
        }
        free(del);
    }else if(del->l!=NULL&&del->r==NULL){
        if(del->per->l==del){
            del->per->l=del->l;
            del->l->per=del->per;
        }else{
            del->per->r=del->l;
            del->l->per=del->per;
        }
        free(del);
    }else if(del->l==NULL&&del->r!=NULL){
        if(del->per->l==del){
            del->per->l=del->r;
            del->r->per=del->per;
        }else{
            del->per->r=del->r;
            del->r->per=del->per;
        }
        free(del);
    }else{
        tk=next(del)->key;
        delete(px,tk);
        del->key=tk;
    }
}

node* next(node* px){
    node* x;
    if(px->r!=NULL){
        px=px->r;
        while(px->l!=NULL){
            px=px->l;
        }
        return px;
    }
    x=px->per;
    while(x!=NULL&&px==x->r){
        px=x;
        x=x->per;
    }
    return x;
}