#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int id;
  int k;
  struct node *right;
  struct node *left;
  struct node *p;
}node;

void preorder(node*);
void inorder(node*);
void postorder(node*);

int count[1000];
node *root;

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
    tree[id].left->id=left;
    tree[left].p=&tree[id];
   
    //right
    if(right!=-1) tree[id].k++;
    tree[id].right=malloc(sizeof(node));
    tree[id].right=&tree[right];
    tree[id].right->id=right;
    tree[right].p=&tree[id];
  }
  for(i=0;i<n;i++){
    if(tree[i].p==NULL){
      root=&tree[i];
    }
  }
  for(i=0;i<1000;i++){
    count[i]=0;
  }
  printf("Preorder\n");
  preorder(root);
  printf("\n");
  for(i=0;i<1000;i++){
    count[i]=0;
  }
  printf("Inorder\n");
  inorder(root);
  printf("\n");
  for(i=0;i<1000;i++){
    count[i]=0;
  }
  printf("Postorder\n");
  postorder(root);
  printf("\n");
  return 0;
}
void preorder(node *u){
  if(u->k==0){
    if(count[u->id]==0){
      printf(" %d",u->id);
      count[u->id]=1;
    }
    return;
  }
  count[u->id]=1;
  printf(" %d",u->id);
  preorder(u->left);
  preorder(u->right);
}
void inorder(node *u){
  if(u->k==0){
    if(count[u->id]==0){
      printf(" %d",u->id);
      count[u->id]=1;
    }
    return;
  }
  count[u->id]=1;
  if(u->k!=0){
    inorder(u->left);
    printf(" %d",u->id);
    inorder(u->right);
  }
}
void postorder(node *u){
  if(u->k==0){
    if(count[u->id]==0){
      printf(" %d",u->id);
      count[u->id]=1;
    }
    return;
  }
  count[u->id]=1;
  postorder(u->left);
  postorder(u->right);
  printf(" %d",u->id);
}

