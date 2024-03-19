#include<stdio.h>
#define MAX_NUM 25

typedef struct Node{
    int key;
    int left;
    int right;
    int parent;
}node;

int Root(node *tree,int len){
    int i;
    for(i=0; i<len; i++){
        if(tree[i].key != -1 && tree[i].parent == -1){
            return i;
        }
    }
    return -1;
}

void PrintPreorder(node *tree, int n){
    if(n == -1)return;
    printf(" %d",tree[n].key);
    PrintPreorder(tree,tree[n].left);
    PrintPreorder(tree,tree[n].right);
}

void PrintInorder(node *tree, int n){
    if(n == -1)return;
    PrintInorder(tree,tree[n].left);
    printf(" %d",tree[n].key);
    PrintInorder(tree,tree[n].right);
}

void PrintPostorder(node *tree, int n){
    if(n == -1)return;
    PrintPostorder(tree,tree[n].left);
    PrintPostorder(tree,tree[n].right);
    printf(" %d",tree[n].key);
}

int main(){
    int num,i,k,l,r,root;
    node tree[MAX_NUM];

    scanf("%d",&num);
    for(i=0; i<num; i++){
        tree[i].key = -1;
        tree[i].parent = -1;
    }
    for(i=0; i<num; i++){
        scanf("%d%d%d",&k,&l,&r);
        tree[k].key = k;
        tree[k].left = l;
        tree[k].right = r;
        if(l!=-1)tree[tree[k].left].parent = k;
        if(r!=-1)tree[tree[k].right].parent = k;
    }

    root = Root(tree,num);
    printf("Preorder\n");
    PrintPreorder(tree,root);
    printf("\nInorder\n");
    PrintInorder(tree,root);
    printf("\nPostorder\n");
    PrintPostorder(tree,root);
    printf("\n");

    return 0;
}
