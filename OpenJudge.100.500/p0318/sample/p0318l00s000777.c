#include<stdio.h>
#include<stdlib.h>
#define MAX 500000
#define NIL NULL
struct t{
  int val;
  struct t *parent,*left,*right;
};
typedef struct t * T;
int n;
T root=NIL;

void insert(int u){
  T next,look,z;
  z=(T)malloc(sizeof(struct t));
  z->val=u;
  z->parent=z->left=z->right=NIL;
  next=root;
  look=NIL;
  while(next!=NIL){
    look=next;
    if(z->val > look->val) next=look->right;
    else next=look->left;
  }
  z->parent=look;

  if(z->parent==NIL) root=z;
  else if(z->val > look->val) look->right=z;
  else look->left=z;

}
T find(int u){
  T look=root;
  while(look!=NIL){
    if(look->val==u) return look;
    if(look->val > u) look=look->left;
    else look=look->right;
  }
  return NIL;
}
T getMinimum(T u){
  while(u->left!=NIL){
    u=u->left;
  }
  return u;
}
T getSuccessor(T x){
  T y;
  if(x->right!=NIL) return getMinimum(x->right);

  y=x->parent;
  while(y!=NIL&&x==y->right){
    x=y;
    y=y->parent;
  }
}

void delete(int key){
  T del=find(key),x,y;
  if(del->left==NIL||del->right==NIL) y=del;
  else y=getSuccessor(del);

  if(y->right!=NIL) x=y->right;
  else x=y->left;

  if(x!=NIL) x->parent=y->parent;

  if(y->parent==NIL) root=x;
  else if(y->parent->left==y) y->parent->left=x;
  else  y->parent->right=x;

  if(y!=NIL) del->val=y->val;
}
void preorder(T u){
  if(u==NIL) return;
  printf(" %d",u->val);
  preorder(u->left);
  preorder(u->right);
}
void inorder(T u){
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->val);
  inorder(u->right);
}
int main(){
  int i,u;
  char com[10];
  scanf("%d",&n);
  //for(i=0;i<n;i++) tree[i].p=tree[i].l=tree[i].r=NIL;

  for(i=0;i<n;i++){
    scanf("%s",com);
    if(com[0]=='i'){
      scanf("%d",&u);
      insert(u);
    }else if(com[0]=='f'){
      scanf("%d",&u);
      if(find(u)!=NIL) printf("yes\n");
      else printf("no\n");
    }else if(com[0]=='d'){
      scanf("%d",&u);
      delete(u);
    }else{
       inorder(root);
       printf("\n");
       preorder(root);
       printf("\n");
     }
  }
  return 0;
}

