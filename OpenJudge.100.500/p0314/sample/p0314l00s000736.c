#include<stdio.h>
#include<stdlib.h>
 
typedef struct{
    int p;
    int l;
    int r;
}Node;
 
void Preorder(int);
void Inorder(int);
void Postorder(int);
 
Node *node;
 
int main(void){
    int n,id,root;
    int i;
 
    scanf("%d",&n);
 
    node=(Node*)malloc(n*sizeof(Node));
 
    for(i=0;i<n;i++){
        node[i].p=-1;
        node[i].l=-1;
        node[i].r=-1;
    }
 
    for(i=0;i<n;i++){
        scanf("%d",&id);
 
        scanf("%d",&node[id].l);
        if(node[id].l != -1) node[node[id].l].p=id;
 
        scanf("%d",&node[id].r);
        if(node[id].r != -1) node[node[id].r].p=id;
    }
 
    for(i=0;i<n;i++){
        if(node[i].p==-1) root=i;
    }
 
    printf("Preorder\n");
    Preorder(root);
    printf("\n");
 
    printf("Inorder\n");
    Inorder(root);
    printf("\n");
 
    printf("Postorder\n");
    Postorder(root);
    printf("\n");
 
    free(node);
 
    return 0;
}
 
void Preorder(int id){
    printf(" %d",id);
    if(node[id].l != -1) Preorder(node[id].l);
    if(node[id].r != -1) Preorder(node[id].r);
}
 
void Inorder(int id){
    if(node[id].l != -1) Inorder(node[id].l);
    printf(" %d",id);
    if(node[id].r != -1) Inorder(node[id].r);
}
 
void Postorder(int id){
    if(node[id].l != -1) Postorder(node[id].l);
    if(node[id].r != -1) Postorder(node[id].r);
    printf(" %d",id);
}