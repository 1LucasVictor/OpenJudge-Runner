#include<stdio.h>
#include<stdlib.h>
#define NIL NULL

struct node{
    struct node *right;
    struct node *left;
    struct node *parent;
    int key;
};
typedef struct node * Node;

Node root;

Node treeMinimum(Node x){ 

    // 小さい方へどんどん降りていく
    while(x->left != NIL)
        x = x->left;
    return x;
}

Node treeSearch(Node u, int k){

    if(u == NIL) return NIL;

    // 見つかった
    if(u->key == k) return u;

    // 右か左か
    if(k < u->key) return treeSearch(u->left, k);
    if(k > u->key) return treeSearch(u->right, k);
}

// 節点xに節点があればそれを返す
// xが木の中で最大ならNILを返す
Node treeSuccessor(Node x){

    Node y;

    // 右の子から最小を探索
    if(x->right != NIL) return treeMinimum(x->right);

    // 左の子から最大を検索でも良い
    // if(x->left != NIL) return treeMaximum(x->left);

    // 右の子が存在しなければ、既に探索した節点ではない右の子が存在するノードが見つかるまで親の節点を探索
    y = x->parent;

    // 上へ上がっていく
    while(y != NIL && x == y->parent){
        x = y;
        y = y->parent;
    }
    return y;
}

void treeDelete(Node z){
    Node y; // node to be deleted
    Node x; // child of y

    // zの子が一つ以下なら削除し子供と置き換える
    if(z->left == NIL || z->right == NIL) y = z;
    //子を2つ持つ場合
    else y = treeSuccessor(z);

    if(y->left != NIL) x = y->left;
    else x = y->right;

    // yの親とxのポインタを変更しyを削除する
    // yが子を一つ持つ場合
    if(x != NIL) x->parent = y->parent;

    // yが根の時の境界条件を処理
    if(y->parent == NIL) root = x;

    // yが左の子の場合?
    else if(y == y->parent->left) y->parent->left = x;

    // yが右の子の場合?
    else if(y == y->parent->right) y->parent->right = x;

    // zの次節点が削除された時にyの内容をzに移動する
    if(y != z) z->key = y->key;
}

void insert(int k){
    Node y = NIL;
    Node x = root;
    Node z;

    // node生成
    z = malloc(sizeof(struct node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL) {
        // 下に降りていく
        y = x;
        if(z->key < x->key) x = x->left;
        else x = x->right;
    }

    z->parent = y;

    // 根
    if(y == NIL) root = z;

    // yよりzが小さければ左の子に
    else if(z->key < y->key) y->left = z;

    // yよりzが大きければ右の子に
    else y->right = z;
}

void inorder(Node u){
    if(u->left != NIL) inorder(u->left);
    printf(" %d", u->key);
    if(u->right != NIL) inorder(u->right);
}

void preorder(Node u){
    printf(" %d", u->key);
    if(u->left != NIL) preorder(u->left);
    if(u->right != NIL) preorder(u->right);
}


int main(){
    int n, i, x;
    char com[20];
    scanf("%d", &n);

    for ( i = 0; i < n; i++ ){
        scanf("%s", com);

        // find
        if ( com[0] == 'f' ){
            scanf("%d", &x);
            Node t = treeSearch(root, x);
            if ( t != NIL ) printf("yes\n");
            else printf("no\n");
        } 

        // insert
        else if ( com[0] == 'i' ){
            scanf("%d", &x);
            insert(x);
        } 

        // print
        else if ( com[0] == 'p' ){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        } 

        else if ( com[0] == 'd' ){
            scanf("%d", &x);
            treeDelete(treeSearch(root, x));
        } 
    }

    return 0;
}