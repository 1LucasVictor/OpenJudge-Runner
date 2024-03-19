#include <stdio.h>

#define MAX(x, y) ((x) >= (y) ? (x) : (y))
int get_int() {
    int n = 0;
    int sign = 1;
    int c = getchar_unlocked();
    if(c == 45) sign = -1, c = getchar_unlocked();
    else if(c < 48 || 57 < c) return c;
    while(47 < c && c < 58) {
        n = 10 * n + (c & 0xf);
        c = getchar_unlocked();
    }
    return n * sign;
}
void put_uint(int n) {
    if(!n) {
        putchar_unlocked('0');
        return;
    }
    char buf[11];
    int i = 0;
    while(n) buf[i++] = (char)(n % 10 + '0'), n /= 10;
    while(i--)putchar_unlocked(buf[i]);
}
void put_str(char *str) { while(*str) putchar_unlocked(*str++); }

typedef struct Node {
    int parent, left, right, depth, height, sibling;
} Node;
typedef struct BinaryTree {
    Node nodes[25];
    int root;
} BinaryTree;
void bt_init(BinaryTree *BT) {
    for(int i = 0; i < 25; ++i) BT->nodes[i].parent = -1;
}
void bt__depth(BinaryTree *BT, int id, int depth) {
    if(id == -1) return;
    Node *node = &BT->nodes[id];
    node->depth = depth;
    bt__depth(BT, node->left, depth + 1);
    bt__depth(BT, node->right, depth + 1);
}
int bt__height(BinaryTree *BT, int id) {
    int h1 = 0, h2 = 0;
    Node *node = &BT->nodes[id];
    if(~node->left) h1 = bt__height(BT, node->left) + 1;
    if(~node->right) h2 = bt__height(BT, node->right) + 1;
    return node->height = MAX(h1, h2);
}
int bt__sibling(BinaryTree *BT) {
    for(int i = 0; i < 25; ++i) {
        Node *node = &BT->nodes[i];
        if(node->parent == -1) {
            node->sibling = -1;
            continue;
        }
        int left = BT->nodes[node->parent].left;
        int right = BT->nodes[node->parent].right;
        if(left != i && ~left) node->sibling = left;
        else if(right != i && ~right) node->sibling = right;
        else node->sibling = -1;
    }
}
void bt_make(BinaryTree *BT) {
    for(int i = 0; i < 25; ++i) {
        if(BT->nodes[i].parent == -1) {
            BT->root = i;
            break;
        }
    }
    bt__depth(BT, BT->root, 0);
    bt__height(BT, BT->root);
    bt__sibling(BT);
}
void bt_add_node(BinaryTree *BT, int id, int left, int right) {
    BT->nodes[id].left = left;
    BT->nodes[id].right = right;
    if(~left) BT->nodes[left].parent = id;
    if(~right) BT->nodes[right].parent = id;
}
void bt_pr_preorder(BinaryTree *BT, int id) {
    if(id == -1) return;
    putchar_unlocked(' ');
    put_uint(id);
    bt_pr_preorder(BT, BT->nodes[id].left);
    bt_pr_preorder(BT, BT->nodes[id].right);
}
void bt_pr_inorder(BinaryTree *BT, int id) {
    if(id == -1) return;
    bt_pr_inorder(BT, BT->nodes[id].left);
    putchar_unlocked(' ');
    put_uint(id);
    bt_pr_inorder(BT, BT->nodes[id].right);
}
void bt_pr_postorder(BinaryTree *BT, int id) {
    if(id == -1) return;
    bt_pr_postorder(BT, BT->nodes[id].left);
    bt_pr_postorder(BT, BT->nodes[id].right);
    putchar_unlocked(' ');
    put_uint(id);
}
int main(int argc, char **argv) {
    int n = get_int();
    BinaryTree BT;
    bt_init(&BT);
    for(int i = 0; i < n; ++i) {
        int id = get_int();
        int left = get_int();
        int right = get_int();
        bt_add_node(&BT, id, left, right);
    }
    bt_make(&BT);

    int root = BT.root;
    put_str("Preorder\n");
    bt_pr_preorder(&BT, root);
    putchar_unlocked('\n');
    put_str("Inorder\n");
    bt_pr_inorder(&BT, root);
    putchar_unlocked('\n');
    put_str("Postorder\n");
    bt_pr_postorder(&BT, root);
    putchar_unlocked('\n');
    return 0;
}


