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
  struct tree *parent;
}tree;
tree *getnewnode(tree*,int);
tree *insert(tree*,tree*,int);
void inorderprint(tree*);
void preorderprint(tree*);
bool findkey(tree*,int);
void delete(tree*,int);
tree *deletenode(tree*,int);
tree *minnode(tree*);
int main(){
  int n,val;
  char command[7];
  tree *root=NULL;
  tree *parent=NULL;
  scanf("%d",&n);
  lpton(i,n){
    scanf("%s",command);
    if(!strcmp(command,"insert")){
      scanf("%d",&val);
      root=insert(root,parent,val);
    }
    else if(!strcmp(command,"find")){
      scanf("%d",&val);
      printf("%s\n",findkey(root,val)!=false?"yes":"no");
    }
    else if(!strcmp(command,"delete")){
      scanf("%d",&val);
      delete(root,val);
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
tree *getnewnode(tree *parent,int value){
  tree *origin=m(tree,1);
  origin->key=value;
  origin->left=origin->right=NULL;
  origin->parent=parent;
  return origin;
}
tree *insert(tree *root,tree *parent,int v){
if(root==NULL)root=getnewnode(parent,v);
  else if(v<root->key){
    parent=root;
    root->left=insert(root->left,parent,v);
  }
  else{
    parent=root;
    root->right=insert(root->right,parent,v);
  }
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
void delete(tree *dl,int k){
  tree *tmp;
  tmp=m(tree,1);
  dl=deletenode(dl,k);
  if(dl->left==NULL&&dl->right==NULL){
    if(dl->parent->right==dl)dl->parent->right=NULL;
    else dl->parent->left=NULL;
    free(dl);
  }
  else if(dl->left==NULL){
    dl->parent->right=dl->right;
    dl->right->parent=dl->parent;
    free(dl);
  }
  else if(dl->right==NULL){
    dl->parent->left=dl->left;
    dl->left->parent=dl->parent;
    free(dl);
  }
  else{
    tmp=minnode(dl->right);
    dl->key=tmp->key;
    if(tmp->left==NULL&&tmp->right==NULL){
      if(tmp->parent->right==tmp)tmp->parent->right=NULL;
      else tmp->parent->left=NULL;
      free(tmp);
    }
    else if(tmp->left==NULL){
      tmp->parent->right=tmp->right;
      tmp->left->parent=tmp->parent;
      free(tmp);
    }
    else if(tmp->right==NULL){
      tmp->parent->left=tmp->left;
      tmp->left->parent=tmp->parent;
      free(tmp);
    }
  }
}
tree *deletenode(tree *dl,int k){
  while(dl){
    if(dl->key==k)return dl;
    else if(dl->key<k)dl=dl->right;
    else dl=dl->left;
  }
}
tree *minnode(tree *dl){
  if(dl)return dl;
  else minnode(dl->left);
}

