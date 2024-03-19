#include<stdio.h>
#include<stdlib.h>
#define MAX 26

typedef struct cell{
 int id;
 struct cell *right;
 struct cell *left;
 struct cell *parent;
}cell;


void preorder(cell *root,cell N[]){
cell *p=root;
printf(" %d",p->id);

if(p->left!=NULL){preorder(p->left,N);}
if(p->right!=NULL){preorder(p->right,N);}

return;
}

void inorder(cell *root,cell N[]){
cell *p=root;
if(p->left!=NULL){inorder(p->left,N);}
printf(" %d",p->id);
if(p->right!=NULL){inorder(p->right,N);}

return;
}

void postorder(cell *root,cell N[]){
cell *p=root;
if(p->left!=NULL){postorder(p->left,N);}
if(p->right!=NULL){postorder(p->right,N);}
printf(" %d",p->id);

return;
}










int main(){
int i,n;
int x,y,z;
cell *root;
cell N[MAX];


scanf("%d",&n);

for(i=0;i<n;i++){N[i].parent=NULL;}



for(i=0;i<n;i++){
 scanf("%d %d %d",&x,&y,&z);
 N[x].id=x;
 if(y==-1){N[x].left=NULL;}
 else{N[x].left=&N[y];N[y].parent=&N[x];}
 if(z==-1){N[x].right=NULL;}
 else{N[x].right=&N[z];N[z].parent=&N[x];}
}

for(i=0;i<n;i++){if(N[i].parent==NULL){root=&N[i];break;}}


printf("Preorder\n");
preorder(root,N);
printf("\n");

printf("Inorder\n");
inorder(root,N);
printf("\n");

printf("Postorder\n");
postorder(root,N);
printf("\n");





return 0;
}
