//
// Created by kota_ on 2019/12/30.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int key;
    struct node *parent;
    struct node *left;
    struct node *right;
}Node;

typedef Node* Nodepointer;
void print_preorder(Nodepointer root);
void print_inorder(Nodepointer root);
void clear(Nodepointer root);

Nodepointer make_1node(int key){
    Nodepointer ret = malloc(sizeof(Node));
    ret->key = key;
    ret->parent = NULL;
    ret->left = NULL;
    ret->right = NULL;
    return ret;
}


void insert(Nodepointer *Tree, int key){
    Nodepointer x, y, z;
    y = NULL;
    x = *Tree;
    while(x != NULL){
        y = x;
        if(key < x->key){
            x = x->left;
        }
        else{
            x = x->right;
        }
    }
    z = make_1node(key);
    z->parent = y;

    if(y == NULL){
        *Tree = z;
    }
    else if(key < y->key){
        y->left = z;
    }
    else{
        y->right = z;
    }

}


int main(){
    int i, n, key;
    char command[7];
    Nodepointer Tree = NULL;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", command);
        if(strcmp("insert", command) == 0){
            scanf("%d", &key);
            insert(&Tree, key);
        }
        else if(strcmp("print", command) == 0){
            print_inorder(Tree);
            printf("\n");
            print_preorder(Tree);
            printf("\n");
        }
    }
    clear(Tree);
    return 0;
}

void print_preorder(Nodepointer root){
    if(root == NULL){
        return;
    }
    printf(" %d", root->key);
    print_preorder(root->left);
    print_preorder(root->right);
}

void print_inorder(Nodepointer root) {
    if(root == NULL){
        // 安全対策、ヨシ！
        return;
    }
    if(root->left != NULL){
        print_inorder(root->left);
    }
    printf(" %d", root->key);
    if(root->right != NULL){
        print_inorder(root->right);
    }
}

void clear(Nodepointer root){
    if(root == NULL){
        // 安全対策、ヨシ！
        return;
    }
    clear(root->right);
    clear(root->left);
    free(root);
}

