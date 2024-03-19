#include<stdio.h>
#include<stdlib.h>
 
struct node{
    struct node *x;
    struct node *y;
    struct node *z;
    int key;
};
 
typedef struct node * Node;
 
void inorder(Node);
void preorder(Node);
void insert(int);
 
Node root;
 
int main(){
  int n,in,i;
    char input[7];
 
    scanf("%d",&n);
 
    for(i=0;i<n;i++){
        scanf("%s",input);
 
        if(input[0]=='i'){
            scanf("%d",&in);
            insert(in);     
        }
        else{
            if(root!=NULL){
                inorder(root);
                printf("\n");
                preorder(root);
                printf("\n");
            }
        }
    }
 
    return 0;
}
 
 
void insert(int in){
    Node new,work,move;
 
    new=(Node)malloc(sizeof(struct node));
    new->key=in;
    new->x=NULL;
    new->y=NULL;
 
    work=NULL;
    move=root;
    while(move!=NULL){
        work=move;
        if(move->key > in){
            move=move->x;
        }
        else{
            move=move->y;
        }
    }
 
    new->z=work;
    if(work==NULL) root=new;
    else if(work->key > in) work->x=new;
    else work->y=new;
 
}
 
 
void inorder(Node work){
    if(work->x != NULL) inorder(work->x);
    printf(" %d",work->key);
    if(work->y != NULL) inorder(work->y);
}
 
 
void preorder(Node work){
    printf(" %d",work->key);
    if(work->x != NULL) preorder(work->x);
    if(work->y != NULL) preorder(work->y);
}