#include <stdio.h>
 
typedef struct{
    int p;
    int left;
    int right;
}Tree;
 
void preparse(int);
void inparse(int);
void postparse(int);
 
Tree tree[100];
int n;
 
int main(){
    int i,root,p,left,right;
 
    scanf("%d",&n);
    for(i=0;i<n;i++){
        tree[i].p = -1;
    }
    for(i=0;i<n;i++){
        scanf("%d%d%d",&p,&left,&right);
        tree[p].left = left;
        tree[p].right = right;
        if(left != -1)tree[left].p = p;
        if(right != -1)tree[right].p = p;
    }
 
    for(i=0;i<n;i++){
        if(tree[i].p == -1)root = i;
    }
 
    printf("Preorder\n");
    preparse(root);
    printf("\nInorder\n");
    inparse(root);
    printf("\nPostorder\n");
    postparse(root);
    printf("\n");
    return 0;
}
 
void preparse(int u){
    if(u== -1)return ;
    printf(" %d", u);
    preparse(tree[u].left);
    preparse(tree[u].right);
}
 
void inparse(int u){
    if(u==-1)return ;
    inparse(tree[u].left);
    printf(" %d",u);
    inparse(tree[u].right);
}
 
void postparse(int u){
    if(u==-1)return ;
 
        postparse(tree[u].left);
        postparse(tree[u].right);
        printf(" %d", u);
     
}