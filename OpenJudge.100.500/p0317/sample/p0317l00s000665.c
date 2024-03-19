#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#define lpton(i,n) for(int i=0;i<(int)n;i++)
#define lpto0(i,n) for(int i=n;i>-1;i--)
#define lpmn(i,m,n) for(i=m;i<n;i++)
#define ms(l,n,s) memset(l,n,s)
#define m(l,n) (l*)malloc(n*sizeof(l))
typedef struct tree{
  int key;
  struct tree *left;
  struct tree *right;
}tree;
tree *getrootnode(tree*,int);
tree *insert(tree*,int);
void inorderprint(tree*);
void preorderprint(tree*);
bool findkey(tree*,int);
int main(){
  int n,val;
  char command[7];
  tree *root=NULL;
  scanf("%d",&n);
  lpton(i,n){
    scanf("%s",command);
    if(!strcmp(command,"insert")){
      scanf("%d",&val);
      root=insert(root,val);
    }
    else if(!strcmp(command,"find")){
      scanf("%d",&val);
      printf("%s\n",findkey(root,val)!=false?"yes":"no");
    }
    else{
      inorderprint(root);
      printf("\n");
      preorderprint(root);
    printf("\n");
    }
  }
  return 0;
}
tree *getnewnode(tree *root,int value){
  tree *origin=m(tree,1);
  origin->key=value;
  origin->left=origin->right=NULL;
  return origin;
}
tree *insert(tree *root,int v){
  if(root==NULL)root=getnewnode(root,v);
  else if(v<root->key)root->left=insert(root->left,v);
  else root->right=insert(root->right,v);
  return root;
}
void inorderprint(tree *rt){
  if(rt==NULL)return;
  inorderprint(rt->left);
  printf(" %d",rt->key);
  inorderprint(rt->right);
}
void preorderprint(tree *rt){
  if(rt==NULL)return;
  printf(" %d",rt->key);
  preorderprint(rt->left);
  preorderprint(rt->right);
}
bool findkey(tree *ob,int k){
  while(ob){
    if(ob->key==k)return true;
    else if(ob->key<k)ob=ob->right;
    else ob=ob->left;
  }
  return false;
}

