#include <stdio.h>
#define MAX 10000
#define NIL (-1)

struct Node{
    int parent, left, right;
};

struct Node T[MAX];
int n;

void preorder(int r);
void inorder(int r);
void postorder(int r);

int main(){
    int i, id, r;
    scanf("%d", &n);
    for( i = 0; i < n; i++){
        T[i].parent = NIL;
    }
    for( i = 0; i < n; i++){
        scanf("%d", &id);
        scanf("%d %d", &T[id].left, &T[id].right);
        if(T[id].left != NIL) T[T[id].left].parent = id;
        if(T[id].right != NIL) T[T[id].right].parent = id;
    }
    for(i = 0; i < n; i++){
        if(T[i].parent == NIL) r = i;
    }
    printf("Preorder\n");
    preorder(r);
    printf("\nInorder\n");
    inorder(r);
    printf("\nPostorder\n");
    postorder(r);
    printf("\n");

    return 0;
}

void preorder(int r){
    printf(" %d", r);
    if(T[r].left != NIL ) preorder(T[r].left);
    if(T[r].right != NIL ) preorder(T[r].right);
}

void inorder(int r){
    if(T[r].left != NIL ) inorder(T[r].left);
    printf(" %d", r);
    if(T[r].right != NIL ) inorder(T[r].right);
}
void postorder(int r){
    if(T[r].left != NIL ) postorder(T[r].left);
    if(T[r].right != NIL ) postorder(T[r].right);
    printf(" %d", r);  
}
