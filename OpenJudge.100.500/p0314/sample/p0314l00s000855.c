#include <stdio.h>

typedef struct{
    int parent;
    int left;
    int right;
}Tree;

Tree T[25];

void preorder(int);
void inorder(int);
void postorder(int);

int main(){
    int i,j,n;
    int id;
    int data;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&id);
        scanf("%d",&data);
        T[id].left=data;
        if(data!=-1)T[data].parent=id;
        scanf("%d",&data);
        T[id].right=data;
        if(data!=-1)T[data].parent=id;
    }
    //
    /*
    printf("\n\n");
    for(i=0;i<n;i++){
        printf("%d %d %d %d\n",i,T[i].parent,T[i].left,T[i].right);
    }
    
    */
    //
    
    printf("Preorder\n");
    preorder(0);
    
    printf("\nInorder\n");
    inorder(0);
    
    printf("\nPostorder\n");
    postorder(0);
    printf("\n");
    
    return 0;
    
}

void preorder(int n){
    printf(" %d",n);
    if(T[n].left!=-1)preorder(T[n].left);
    if(T[n].right!=-1)preorder(T[n].right);
}

void inorder(int n){
    if(T[n].left!=-1)inorder(T[n].left);
    printf(" %d",n);
    if(T[n].right!=-1)inorder(T[n].right);
}

void postorder(int n){
    if(T[n].left!=-1)postorder(T[n].left);
    if(T[n].right!=-1)postorder(T[n].right);
    printf(" %d",n);
    
}