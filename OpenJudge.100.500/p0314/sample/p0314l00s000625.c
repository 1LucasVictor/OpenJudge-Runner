#include<stdio.h>
#define N 25

typedef struct {
    int parent;
    int left;
    int right;
    
}Tree;

void PreOrder(int);
void InOrder(int);
void PostOrder(int);

Tree data[N];
int n;

int main(){
 int i,id,root;

 scanf("%d",&n);
 for(i=0;i<n;i++){
    data[i].parent=-1;
    data[i].left=-1;
    data[i].right=-1;
 }

 for(i=0;i<n;i++){
     scanf("%d",&id);
     scanf("%d %d",&data[id].left,&data[id].right);
     if(data[id].left!=-1) data[data[id].left].parent=id;
     if(data[id].right!=-1)data[data[id].right].parent=id;
    
 }
 
 for(i=0;i<n;i++){
     if(data[i].parent==-1) root=i;
     
 }
 printf("Preorder\n");
 PreOrder(root);
 printf("\n");
 
 printf("Inorder\n");
 InOrder(root);
 printf("\n");
 
 printf("Postorder\n");
 PostOrder(root);
 printf("\n");
 
 return 0;
 
}

void  PreOrder(int node){
   if(node==-1) return;
   printf(" %d",node);
   PreOrder(data[node].left);
   PreOrder(data[node].right);
}

void InOrder(int node){
   if(node==-1) return;
   InOrder(data[node].left);
   printf(" %d",node);
   InOrder(data[node].right);
}

void PostOrder(int node){
   if(node==-1)  return;
   PostOrder(data[node].left);
   PostOrder(data[node].right);
   printf(" %d",node);
}
