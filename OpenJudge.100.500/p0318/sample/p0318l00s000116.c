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
node_pointer search(int);
node_pointer Minimum(node_pointer);
node_pointer Successor(node_pointer);
void delete(node_pointer); 

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

        else if(strcmp(order,"delete") == 0){
            scanf("%d",&num);
            delete(search(num));
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

node_pointer search(int num){
    node_pointer a;
    a = root;

    while(1){
        if(a == nil) break;
        if(a->key == num) return a;
        if(num < a->key) a = a->left;
        else if(num >= a->key) a = a->right;
    }

    return nil;
}

node_pointer Minimum(node_pointer a){
    while(a->left != nil){
        a = a->left;;
    }
    return a;
}

node_pointer Successor(node_pointer a){
    if(a->right != nil) return Minimum(a->right);
    node_pointer b = a->par;
    while(1){
        if(b == nil || b->right) break;
        a = b;
        b = b->par;
    }

    return b;
}

void delete(node_pointer a){
    node_pointer b,c;
    if(a->left != nil && a->right != nil) b = Successor(a);
    else b = a;

    //cはaを削除した後にaの場所に来るノードの子
    if(b->left != nil){
        c = b->left;
    }else {
        c = b->right;
    }

    if(c != nil) c-> par =b->par;

    if( b->par == nil){
        root = c;
    }else{
        if(b != b->par->left) b->par->right = c;
        else b->par->left = c; 
    }

    a->key = b->key;

    free(b);
}
