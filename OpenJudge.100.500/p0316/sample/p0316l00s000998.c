#include <stdio.h>

#define STR_MAX 100
#define MAX_NODE 500001

typedef struct _NODE{
    int key;
    struct _NODE *right;
    struct _NODE *left;
} NODE;

NODE node_pool[MAX_NODE];
int node_cnt;
NODE *root;

void insert_tree(NODE **root,int k);
void print_tree(NODE *root);
void print_tree_inorder(NODE *node);
void print_tree_preorder(NODE *node);

int main(){
    int i;
    int m,k;
    char buf[STR_MAX];

    node_cnt = 0;
    root = NULL;

    scanf("%d%*c",&m);
    for( i=0; i<m; i++){
        fgets(buf,STR_MAX,stdin);
        if(buf[0]=='i'){
            //insert
            sscanf(buf,"%*s %d",&k);
            insert_tree(&root,k);
        }else{
            //print
            print_tree(root);
        }
    }

    return 0;
}


void insert_tree(NODE **root,int k){
    NODE *y = NULL; // x の親
    NODE *x = *root;
    NODE *z = &node_pool[node_cnt];
    node_cnt++;
    z->key = k;
    z->right = NULL;
    z->left = NULL;

    while( x != NULL ){
        y = x; // 親を設定
        if( z->key < x->key ){
            x = x->left; // 左の子へ移動
        }else{
            x = x->right; // 右の子へ移動
        }
    }

    if( y == NULL){ // T が空の場合
        *root = z;
    }else if( z->key < y->key){
        y->left = z; // z を y の左の子にする
    }else{
        y->right = z; // z を y の右の子にする
    }
}

void print_tree(NODE *root){
    print_tree_inorder(root);
    printf("\n");
    print_tree_preorder(root);
    printf("\n");
}

void print_tree_inorder(NODE *node){
    if(node==NULL) return;
    print_tree_inorder(node->left);
    printf(" %d",node->key);
    print_tree_inorder(node->right);
}

void print_tree_preorder(NODE *node){
    if(node==NULL) return;
    printf(" %d",node->key);
    print_tree_preorder(node->left);
    print_tree_preorder(node->right);
}

