#include<stdio.h>
#include<stdlib.h>
 struct node{
    struct node *r;
    struct node *l;
    struct node *p;
    int key;
};
typedef struct node * Node;
 
Node root;
 
Node TreeM(Node x){
 }
 
Node TreeS(Node udemy, int kee){
    if(udemy == NULL || udemy->key == kee)
        return udemy;
    else if(udemy->key > kee)
        return TreeS(udemy->l, kee);
    else if(udemy->key < kee)
        return TreeS(udemy->r, kee);
}
 
Node TreeSu(Node x){
 }
 
void TreeDe(Node z){
    Node y; 
    Node x;
 }
 
void Inse(int k){
    Node y = NULL;
    Node x = root;
    Node zet;
 
    zet = (Node)malloc(sizeof(struct node));
    zet->key = k;
    zet->l = NULL;
    zet->r = NULL;
 
    while(x != NULL){
        y = x;
        if(zet->key < x->key)
            x = x->l;
        else
            x = x->r;
    }
    zet->p = y;
    if(y == NULL)
        root = zet;
    else if(zet->key < y->key)
        y->l = zet;
    else
        y->r = zet;
 }
 
void ino(Node u){
    if(u->l != NULL)
        ino(u->l);
    printf(" %d",u->key);
    if(u->r != NULL)
        ino(u->r);
}
void pre(Node u){
    printf(" %d",u->key);
    if(u->l != NULL)
        pre(u->l);
    if(u->r != NULL)
        pre(u->r);
}
 
 
int main(){
    int num,j, x;
    char com[20];
    Node t;
    scanf("%d", &num);
    for (j=0;j<num;j++){
        scanf("%s", com);
        if ( com[0] == 'f' ){
            scanf("%d", &x);
            t = TreeS(root, x);
            if ( t != NULL ) printf("yes\n");
            else printf("no\n");
        } else if ( com[0] == 'i' ){
            scanf("%d", &x);
            Inse(x);
        } else if ( com[0] == 'p' ){
            ino(root);
            printf("\n");
            pre(root);
            printf("\n");
        } 
    }
 
    return 0;
}