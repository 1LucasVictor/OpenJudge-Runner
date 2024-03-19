#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int id;
  int k;
  int sibling;
  struct node *right;
  struct node *left;
  struct node *p;
}node;

void preorder(node*);
void inorder(node*);
void postorder(node*);

int main(){

  int i;
  int n,id,left,right;

  //input
  scanf("%d",&n);
  node tree[n];
  for(i=0;i<n;i++){
    tree[i].p=NULL;
  }
  for(i=0;i<n;i++){
    scanf("%d%d%d",&id,&left,&right);
    tree[id].id=id;
    tree[id].k=0;
    //left
    if(left!=-1) tree[id].k++;
    tree[id].left=malloc(sizeof(node));
    tree[id].left=&tree[left];
    tree[left].sibling=right;
    tree[id].left->id=left;
    tree[left].p=&tree[id];
   
    //right
    if(right!=-1) tree[id].k++;
    tree[id].right=malloc(sizeof(node));
    tree[id].right=&tree[right];
    tree[right].sibling=left;
    tree[id].right->id=right;
    tree[right].p=&tree[id];
  }

  printf("Preorder\n");
  preorder(tree);
  printf("\n");
  printf("Inorder\n");
  inorder(tree);
  printf("\n");
  printf("Postorder\n");
  postorder(tree);
  printf("\n");
  
  return 0;
}
void preorder(node *u){
  if(u->k==0){
    printf(" %d",u->id);
    return;
  }
  printf(" %d",u->id);
  preorder(u->left);
  preorder(u->right);
}
void inorder(node *u){
  if(u->k!=0){
    inorder(u->left);
    printf(" %d",u->id);
    inorder(u->right);
  }
  else if(u->k==0) printf(" %d",u->id);
}
void postorder(node *u){
  if(u->k==0){
    printf(" %d",u->id);
    return;
  }
  postorder(u->left);
  postorder(u->right);
  printf(" %d",u->id);
}

