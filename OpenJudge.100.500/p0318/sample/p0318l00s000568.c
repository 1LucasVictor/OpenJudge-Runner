/*
 * FileName:     binary_tree_3_fix
 * CreatedDate:  2020-07-02 16:04:11 +0900
 * LastModified: 2020-07-02 23:28:50 +0900
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct tree{
    int key;
    struct tree *parent;
    struct tree *left;
    struct tree *right;
}tree;
typedef struct initial{
    tree *root;
}initial;
void insert(tree* node, int k){
/*    printf("node:%p\n",node);
    printf("left:%p\n",node->left);
    printf("right:%p\n",node->right);*/
    if(node->key>k && node->left){
        insert(node->left, k);
    }
    else if(node->key>k && !node->left){
        node->left = malloc(sizeof(tree));
        node->left->left = NULL;
        node->left->right = NULL;
        node->left->key = k;
        node->left->parent = node;
    }
    else if(node->key<=k && node->right){
        insert(node->right, k);
    }
    else{
        node->right = malloc(sizeof(tree));
        node->right->left = NULL;
        node->right->right = NULL;
        node->right->key = k;
        node->right->parent = node;
    }
}
void print(tree *node, int order){
    if(node){
        if(order==0){
            printf(" %d",node->key);
            print(node->left, order);
            print(node->right, order);
        }
        else if(order==1){
            print(node->left, order);
            printf(" %d",node->key);
            print(node->right, order);
        }
    }
}
tree *find(tree *node, int k){
    if(!node){
        return NULL;
    }
    if(node->key > k){
        return find(node->left, k);
    }
    else if(node->key < k){
        return find(node->right, k);
    }
    else{
        return node;
    }
}
int left_or_right(tree *p){
    if(!p->parent){
        return 0;
    }
    else if(p->parent->left==p){
        return 1;
    }
    else if(p->parent->right==p){
        return 2;
    }
}
void delete(initial *root, tree *p){
    int lr = left_or_right(p);
    if(!p->left && !p->right){
        if(lr==1){
            p->parent->left = NULL;
        }
        else if(lr==2){
            p->parent->right = NULL;
        }
        else{
            root->root = NULL;
        }
        p->parent = NULL;
        free(p);
    }
    else if(p->left && !p->right){
        if(lr==1){
            p->parent->left = p->left;
            p->left->parent = p->parent;
        }
        else if(lr==2){
            p->parent->right = p->left;
            p->left->parent = p->parent;
        }
        else{
            root->root = p->left;
        }
        p->parent = NULL;
        free(p);
    }
    else if(!p->left && p->right){
        if(lr==1){
            p->parent->left = p->right;
            p->right->parent = p->parent;
        }
        else if(lr==2){
            p->parent->right = p->right;
            p->right->parent = p->parent;
        }
        else{
            root->root = p->right;
        }
        p->parent = NULL;
        free(p);
    }
    else{
        int tmp = p->key;
        tree *ron = p->right;
        while(ron->left){
            ron = ron->left;
        }
        p->key = ron->key;
        ron->key = tmp;
        delete(root, ron);
    }

}
int main(void){
    int m;scanf("%d", &m);
    initial *root = malloc(sizeof(initial));
    for(int i=0;i<m;i++){
        char command[10];
        scanf("%s", command);
        if(command[0]=='p'){
            print(root->root, 1);
            printf("\n");
            print(root->root, 0);
            printf("\n");
        }
        else{
            int k;
            scanf("%d", &k);
            if(command[0]=='i'){
                if(!root->root){
                    root->root = malloc(sizeof(tree));
//                    printf("%p\n",root->root);
                    root->root->parent = NULL;
                    root->root->key = k;
                    root->root->left = NULL;
                    root->root->right = NULL;
                }
                else{
                    insert(root->root, k);
                }
            }
            else if(command[0]=='f'){
                tree *p = find(root->root, k);
                if(p){
                    printf("yes\n");
                }
                else{
                    printf("no\n");
                }
            }
            else if(command[0]=='d'){
                tree *p = find(root->root, k);
                while(p){
                    delete(root, p);
                    p = find(root->root, k);
                }
/*                print(root->root, 1);
                printf("\n");
                print(root->root, 0);
                printf("\n");*/
            }
        }
    }
    return 0;
}

