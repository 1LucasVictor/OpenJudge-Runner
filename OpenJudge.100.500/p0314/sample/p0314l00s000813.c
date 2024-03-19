#include <stdio.h>
#define MAX 25

struct NODE{
    // int id; idにあった配列番号nに要素を入れればok
    int parent;
    int left;
    int right;
};

void preorder(struct NODE *node, int root){
    if (root == -1){
        return;
    }
    printf(" %d", root);
    preorder(node, node[root].left);
    preorder(node, node[root].right);
}

void inorder(struct NODE *node, int root){
    if (root == -1){
        return;
    }
    
    inorder(node, node[root].left);
    printf(" %d", root);
    inorder(node, node[root].right);
}

void postorder(struct NODE *node, int root){
    if (root == -1){
        return;
    }
    
    postorder(node, node[root].left);
    postorder(node, node[root].right);
    printf(" %d", root);
}



int main(void){
    int n;
    struct NODE node[MAX];
    int i;
    int id, left, right;
    int root;

    scanf("%d", &n);

    for (i = 0; i < MAX; i++){
        node[i].parent = node[i].left = node[i].right = -1;
    }

    for (i = 0; i < n; i++){
        scanf("%d %d %d", &id, &left, &right);
        node[id].left = left;
        node[id].right = right;

        if (left != -1){
            node[left].parent = id;
        }
        if (right != -1){
            node[right].parent = id;
        }
    }

    for (i = 0; i < n; i++){
        if (node[i].parent == -1){
            root = i;
            // printf("%d\n", root);
        }
    }

    

    printf("Preorder\n");
    preorder(node, root);
    printf("\n");

    printf("Inorder\n");
    inorder(node, root);
    printf("\n");

    printf("Postorder\n");
    postorder(node, root);
    printf("\n");

    return 0;
}

