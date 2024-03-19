#include <stdio.h>
struct data{
    int par;
    int left;
    int right;
};
typedef struct data node;
void Preorder(int);
void Inorder(int);
void Postorder(int);
node tree[100000];
int main(){
    int n,i,j,cur,cur_n,root;
    for(i=0;i<100000;i++){
        tree[i].par=-1;
        tree[i].left=-1;
        tree[i].right=-1;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&cur);
        scanf("%d %d",&tree[cur].left,&tree[cur].right);
        if(tree[cur].left!=-1) tree[tree[cur].left].par=cur;
        if(tree[cur].right!=-1) tree[tree[cur].right].par=cur;
    }
   root=0;
   while(1){ 
        if(tree[root].par==-1) break;
        root=tree[root].par;
    }
    printf("Preorder\n");
    Preorder(root);
    printf("\nInorder\n");
    Inorder(root);
    printf("\nPostorder\n");
    Postorder(root);
    printf("\n");
    return 0;
}
void Preorder(int u){
    if(u==-1){
        return;
    }
    printf(" %d",u);
    Preorder(tree[u].left);
    Preorder(tree[u].right);
}
void Inorder(int u){
    if(u==-1){
        return;
    }
    Inorder(tree[u].left);
    printf(" %d",u);
    Inorder(tree[u].right);
}
void Postorder(int u){
    if(u==-1){
        return;
    }
    Postorder(tree[u].left);
    Postorder(tree[u].right);
    printf(" %d",u);
}
