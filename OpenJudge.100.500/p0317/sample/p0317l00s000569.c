#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
  int key;
  struct Node *right,*left,*parent;
};
 
struct Node *root,*NIL1;
 
struct Node* find(struct Node *u,int k){
  while(u != NIL1 && k != u -> key){
    if(k < u -> key) u = u -> left;
    else u = u -> right;
  }
  return u;
}
 
void insert(int k){
  struct Node *y = NIL1;
  struct Node *x = root;
  struct Node *z;
 
  z = (struct Node*)malloc(sizeof(struct Node));
  z -> key = k;
  
  z -> left = NIL1;
  
  z -> right = NIL1;
 
  while(x != NIL1){
    y = x;
    if(z -> key < x -> key){
      x = x -> left;
    } else{
      x = x -> right;
    }
  }
  z -> parent = y;
  if(y == NIL1){
    root= z;
  } else{
    if(z -> key < y -> key){
      y -> left = z;
    } else{
      y -> right = z;
    }
  }
}
 
void inorder(struct Node *u){
  if(u == NIL1) return ;
  inorder(u -> left);
  printf(" %d",u -> key);
  inorder(u -> right);
}
 
void preorder(struct Node *u){
  if(u == NIL1) return ;
  printf(" %d",u -> key);
  preorder(u -> left);
  preorder(u -> right);
}
 
int main(){
  int n,i,res;
  char st[7];
  struct Node *t;
   
  scanf("%d",&n);
 
  for(i = 0;i < n;i++){
    scanf("%s",st);
    if(strcmp(st,"find") == 0){
      scanf("%d",&res);
      t = find(root,res);
      if(t != NIL1) printf("yes\n");
      else printf("no\n");
    }
    else if(strcmp(st,"insert") == 0){
      scanf("%d",&res);
      insert(res);
    }
    else if(strcmp(st,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}