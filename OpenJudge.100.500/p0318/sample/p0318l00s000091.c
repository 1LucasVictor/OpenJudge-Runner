//
// Created by kota_ on 2019/12/30.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define True 1
#define False 0

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
Nodepointer find(Nodepointer root, int key);
void delete(Nodepointer);

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
    Nodepointer Tree = NULL, tmp;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", command);
        if(strcmp("insert", command) == 0){
            scanf("%d", &key);
            insert(&Tree, key);
        }
        else if(strcmp("find", command) == 0){
            scanf("%d", &key);
            if(find(Tree, key) != NULL){
                printf("yes\n");
            }
            else{
                printf("no\n");
            }
        }
        else if(strcmp("delete", command) == 0){
            scanf("%d", &key);
            tmp = find(Tree, key);
            delete(tmp);
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

Nodepointer find(Nodepointer root, int key) {
    if(root == NULL){
        return NULL;
    }
    if(root->key == key){
        return root;
    }
    if(root->key > key){
        return find(root->left, key);
    }
    else{
        return find(root->right, key);
    }
}

void delete(Nodepointer target) {
    Nodepointer new_target;
    if(target == NULL){
        //見つからないってことはないと思うが、制約に書いてないので一応
        return;
    }
    // 1.子がいなかった場合
    if(target->right == NULL && target->left == NULL){
        // 親いなかった場合（まず無いと信じたい
        if(target->parent==NULL){

        }
        //左の子として登録されていた場合(キー重複ないので、大小比較でわかる）
        else if(target->parent->key > target->key){
            target->parent->left = NULL;
        }
        // 右の子として登録されていた場合
        else{
            target->parent->right = NULL;
        }
    }
    // 2.子が2人の場合
    else if(target->left != NULL && target->right != NULL){
        //まずは新しいターゲットを見つける。
        //zの次節点
        //→中間順巡回でzの次に得られる節点
        //→最初に右の子供に移動してそこから行けるところまで左に行く
        for(new_target = target->right;
                new_target->left != NULL;
                new_target = new_target->left){
            // pass
        }
        target->key = new_target->key;
        delete(new_target);
        // この場合、メモリ解放は必要無いのでreturn
        return;
    }
    // 3.子が一人の場合（左)
    else if(target->left != NULL){
        //左の子として登録されていた場合(キー重複ないので、大小比較でわかる）
        if(target->parent->key > target->key){
            target->parent->left = target->left;
            target->left->parent = target->parent;
        }
            // 右の子として登録されていた場合
        else{
            target->parent->right = target->left;
            target->left->parent = target->parent;
        }
    }
    // 3.子が一人の場合（右)
    else if(target->right != NULL) {
        //左の子として登録されていた場合(キー重複ないので、大小比較でわかる）
        if (target->parent->key > target->key) {
            target->parent->left = target->right;
            target->right->parent = target->parent;
        }
            // 右の子として登録されていた場合
        else {
            target->parent->right = target->right;
            target->right->parent = target->parent;
        }
    }
    // 1 or 3 の場合、最後にメモリ解放して終わり
    free(target);

}


