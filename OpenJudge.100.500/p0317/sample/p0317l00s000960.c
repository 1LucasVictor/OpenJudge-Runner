#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int key;
    struct node *left,*right,*par;
};
typedef struct node* node_pointer; 

node_pointer nil,root;

void insert(int);
void Preorder(node_pointer);
void Inorder(node_pointer);
int  search(int); //要素が見つかったら1を、見つからなかったら0を返す関数

int main(){
    int n,i;
    scanf("%d",&n);

    for(i=0; i<n; i++){
        char order[7];
        int num;
        scanf(" %s",order);

        if(strcmp(order,"insert") == 0 ){
            scanf("%d",&num);
            insert(num);
        }

        else if(strcmp(order,"find") == 0){
            scanf("%d",&num);
            if(search(num)) printf("yes\n");
            else printf("no\n");
        }

        else if(strcmp(order,"print") == 0){
            Inorder(root);
            printf("\n");
            Preorder(root);
            printf("\n");
        }
    }

    return 0;
}

void insert(int num){
    node_pointer a,b,c;
    a = root;
    b = nil;
    c = (node_pointer)malloc(sizeof(struct node));
    c->key = num;
    c->right = nil;
    c->left = nil;

    while(a != nil){
        b = a;       
        if(c->key < a->key) a = a->left;
        else a = a->right;
    }

    c->par = b;

    
    if(b == nil) root = c;
    else if(c->key < b->key) b->left = c;
    else b->right = c;
}

void Preorder(node_pointer a){
    if(a == nil) return;
    printf(" %d",a->key);
    if(a->left != nil) Preorder(a->left);
    if(a->right != nil) Preorder(a->right);
}

void Inorder(node_pointer a){
    if(a == nil) return;
    if(a->left != nil) Inorder(a->left);
    printf(" %d",a->key);
    if(a->right != nil) Inorder(a->right);
}

int search(int num){
    node_pointer a;
    a = root;

    while(1){
        if(a == nil) break;
        if(a->key == num) return 1;
        if(num < a->key) a = a->left;
        else if(num >= a->key) a = a->right;
    }

    return 0;
}
