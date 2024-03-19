#include <stdio.h>
#include <stdlib.h>
#define NIL -1
#define Binary 2

typedef struct{
    
    int parent;
    int l;
    int r;
}data; 

void PreOrder(data *Tree,int root){
    
    if(root == NIL)return;
    printf(" %d",root);
    PreOrder(Tree,Tree[root].l);
    PreOrder(Tree,Tree[root].r);
}

void InOrder(data *Tree, int root){
    
    if(root == NIL)return;
    InOrder(Tree,Tree[root].l);
    printf(" %d",root);
    InOrder(Tree,Tree[root].r);
}

void PostOrder(data *Tree, int root){
    
    if(root == NIL)return;
    PostOrder(Tree,Tree[root].l);
    PostOrder(Tree,Tree[root].r);
    printf(" %d",root);
}
int main(int argc, char** argv) {

    int n, val, lc, rc,parent, rootnode;
    scanf("%d",&n);
    data Tree[n];
    
    for(int i = 0; i < n; i++)Tree[i].parent = NIL;
    for(int i = 0 ;i < n; i++){
        
      scanf("%d %d %d",&parent,&lc,&rc);
      Tree[parent].l = lc;
      Tree[parent].r = rc;
      
      if(lc != NIL)Tree[lc].parent = parent;
      if(rc != NIL)Tree[rc].parent = parent;
      
      //printf("node %d leftc %d rightc %d\n",Tree[i].parent,Tree[i].l,Tree[i].r);
    }
    for(int i = 0; i < n ;i++){
        if(Tree[i].parent == NIL)rootnode = i;
    }

    printf("Preorder\n");
    PreOrder(Tree,rootnode);
    printf("\n");
    printf("Inorder\n");
    InOrder(Tree,rootnode);
    printf("\n");
    printf("Postorder\n");
    PostOrder(Tree,rootnode);
    printf("\n");
    return 0;
}
