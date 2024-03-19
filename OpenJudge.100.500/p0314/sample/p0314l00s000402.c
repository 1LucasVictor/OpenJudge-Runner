//
// Created by kota_ on 2019/12/30.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int id;
    struct node *child_left;
    struct node *child_right;
    struct node *parent;
}Node;

typedef Node* Nodepointer;
void print_preorder(Nodepointer root);
void print_inorder(Nodepointer root);
void print_postorder(Nodepointer root);

Node make_1node(int id){
    Node ret;
    ret.id = id;
    ret.child_left = NULL;
    ret.child_right = NULL;
    ret.parent = NULL;
    return ret;
}

int main(){
    int i, j, n, id;
    Nodepointer nodes, parent;
    scanf("%d", &n);
    nodes = malloc(sizeof(Node) * n);
    for(i = 0; i < n; i++){
        // nodeを全部初期化
        nodes[i] = make_1node(i);
    }
    for(i = 0; i < n; i++){
        scanf("%d", &id);
        parent = &nodes[id];
        for(j = 0; j < 2; j++){
            scanf("%d", &id);
            if(id == -1){
                continue;
            }
            if(j == 0){
                parent->child_left = &nodes[id];
            }
            else{
                parent->child_right = &nodes[id];
            }
            nodes[id].parent = parent;
        }

    }
    //root探す！
    for(i = 0; i < n; i++){
        parent = &nodes[i];
        if(parent->parent == NULL){
            break;
        }
    }
    printf("Preorder\n");
    print_preorder(parent);
    printf("\nInorder\n");
    print_inorder(parent);
    printf("\nPostorder\n");
    print_postorder(parent);
    printf("\n");

    free(nodes);
    return 0;
}

void print_preorder(Nodepointer root){
    if(root == NULL){
        return;
    }
    printf(" %d", root->id);
    print_preorder(root->child_left);
    print_preorder(root->child_right);
}

void print_inorder(Nodepointer root) {
    if(root == NULL){
        // 安全対策、ヨシ！
        return;
    }
    if(root->child_left != NULL){
        print_inorder(root->child_left);
    }
    printf(" %d", root->id);
    if(root->child_right != NULL){
        print_inorder(root->child_right);
    }
}

void print_postorder(Nodepointer root) {
    if(root == NULL){
        // 安全対策、ヨシ！
        return;
    }
    if(root->child_left != NULL){
        print_postorder(root->child_left);
    }
    if(root->child_right != NULL){
        print_postorder(root->child_right);
    }
    printf(" %d", root->id);
}


