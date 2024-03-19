#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    // 自分のなまえ
    int key;
    // 子(右) 子(左) 親 のポインタ
    struct Node *right, *left, *parent;
};
typedef struct Node Node;

Node *root, *NIL;

Node * treeMinimum(Node *x) {
    // 木の最小値を返す
    while(x->left != NIL)
        x = x->left;
    return x;
}

Node * find(Node *u, int k) {
    // 一番下に行くか、kが見つかるまで回す
    while(u != NIL && k != u->key) {
        // kが今参照しているキーより小さい場合は左の子に移る
        // 大きかった場合は右の子に移る
        if(k < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}

Node * treeSuccessor(Node *x) {
    // もし右が空じゃなかったらtreeMinimumに行って返り値を返す
    if(x->right != NIL) return treeMinimum(x->right);
    // Node *y = x->parent;
    // while(y != NIL && x == y->right) {
    //     x = y;
    //     y = y->parent;
    // }
    // return y;
}

void treeDelete(Node *z) {
    Node *y; // 削除する対象
    Node *x; // yの子

    // 削除する節点を決める
    // 削除対象に左右どちらにも子がいたらtreeSuccessorに行く
    // 行かなかった場合は構造体yに構造体zを代入する
    if(z->left == NIL || z->right == NIL) y = z;
    else y = treeSuccessor(z);

    // yの子xを決める
    // yに左の子がいればxに左の子を代入する
    if(y->left != NIL) {
        x = y->left;
    }
    // yに左の子がいなければxに右の子を代入する
    else {
        x = y->right;
    }

    // xが空じゃなければxの親にyの親を代入する
    if(x != NIL) {
        x->parent = y->parent;
    }

    // yの親が空(yが根)だったらrootをx(木の根)にする
    if(y->parent == NIL) {
        root = x;
    }
    // 違ったらこっち
    else {
        // yがyの親の左の子だったら親の左の子をxにする
        if(y == y->parent->left) {
            y->parent->left = x;
        }
        // 違ったら親の右の子をxにする
        else {
            y->parent->right = x;
        }
    }

    // もしzの次節点が削除されたらyをzに代入する
    if(y != z) {
        z->key = y->key;
    }
}

void insert(int k) {
    // 構造体yに構造体NILを代入
    Node *y = NIL;
    // 構造体xに構造体rootを代入
    Node *x = root;
    // 構造体zを出す
    Node *z;

    // 構造体zと構造体分のメモリを確保して新しく宣言した構造体を対応させる
    z = (Node *)malloc(sizeof(Node));
    // 構造体zのkeyにkを入力する
    z->key   = k;
    // 構造体zの子を両方NILにする
    z->left  = NIL;
    z->right = NIL;

    // 一番下に行くまで(番兵が出るまで)分岐して行く
    while(x != NIL) {
        // 構造体yに構造体xを代入する
        y = x;
        // 参照するキーより小さかったら左に、大きかったら右の子へ移動する
        if(z->key < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

/////////////////////////////////////////////////////
    // parentは実際このプログラムにはいらない
    // 構造体yを構造体zのparentに入れる
    z->parent = y;
/////////////////////////////////////////////////////

    // 構造体yがNILだった場合(木が空の場合)rootにzを代入する
    if(y == NIL) {
        root = z;
    }
    // 挿入するところのノードと挿入するやつでどっちが大きいかによって左右分ける
    // 挿入するやつの方が小さかったら左、大きかったら右
    else {
        if( z->key < y->key) {
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

// 中間順巡回 (Inorder Tree Walk)
void inorder(Node *u) {
    if(u == NIL) return;
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}
// 先行順巡回 (Preorder Tree Walk)
void preorder(Node *u) {
    if(u == NIL) return;
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}

int main(void) {
    int n, i, x;
    // 文字列を取得するための配列を宣言
    char com[16];
    // ノードの個数を取得
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        // 文字列を取得
        scanf("%s",com);

        // 探すとき
        if(!strcmp(com,"find")) {
            // 探すものを取得
            scanf("%d",&x);
            // 探し始める
            Node *t = find(root,x);
            // 返り値が空(NIL)だったらno、なんかあったらyes
            if(t != NIL) printf("yes\n");
            else printf("no\n");
        }
        // 文字列がinsertだった場合
        else if(!strcmp(com,"insert")) {
            // 挿入する数字を取得
            scanf("%d",&x);
            // 挿入する
            insert(x);
        }
        // 文字列がprintだった場合
        else if(!strcmp(com,"print")) {
            // 中間順巡回(inorder tree walk)を出力
            inorder(root);
            printf("\n");
            // 先行順巡回(preorder tree walk)を出力
            preorder(root);
            printf("\n");
        }
        // 文字列がdeleteだった場合
        else if(!strcmp(com,"delete")) {
            // 削除する数字を取得
            scanf("%d",&x);
            // 削除する
            treeDelete(find(root,x));
        }
    }

    return 0;
}
