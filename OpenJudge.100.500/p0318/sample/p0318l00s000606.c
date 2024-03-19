
#include<stdio.h>
#include<stdlib.h>
#define nil NULL 
struct node{
  struct node *left;
  struct node *right;
  struct node *pmid;
  int key;
};
 
typedef struct node * Node;
 
Node root;
 
void DefPre(Node t){

  printf(" %d",t->key);
  if(t != nil){
    if(t->left != nil) DefPre(t->left);
    if(t->right != nil) DefPre(t->right);
  }
}
 
void DefIn(Node t){
   
  if(t != nil){
    if(t->left != nil){
      DefIn(t->left);
      }

    printf(" %d",t->key);
     
    if(t->right != nil){
      DefIn(t->right);
      }

  }

}
 
void Defin(int numk){
  Node y = nil;
  Node x = root;
  Node numz;
 
  numz = malloc(sizeof(struct node));
  numz->key = numk;
  numz->left = nil;
  numz->right = nil;
   
  while(x != nil){
    y = x;
 
    if(numz->key<x->key) x = x->left;
    else x = x->right;
  }
  numz->pmid = y;
   
  if(y == nil) root = numz;
  else if(numz->key<y->key) y->left = numz;
  else y->right = numz;
}
 
Node Search(Node numt,int numk){
  if(numt == nil || numk == numt->key) return numt;

  if(numk<numt->key) return Search(numt->left,numk);

  else return Search(numt->right,numk);
}
 
Node Minimum(Node numt){
  while(numt->left != nil){

    numt = numt->left;

  }
  return numt;
}
 
Node Successor(Node numt){
  if(numt->right != nil)return Minimum(numt->right);
  Node y = numt->pmid;
  while(y != nil && numt == y->right){
    numt = y;
    y = y->pmid;
  }
  return y;
}
 
void Delete(Node numz){

  Node numy;

  Node numx;
 
  if(numz->left == nil || numz->right == nil) 
    numy = numz;
  else numy = Successor(numz);
 
  if(numy->left!=nil) 
    numx = numy->left;
  else numx = numy->right;
 
  if(numx != nil)
    numx->pmid = numy->pmid;
 
  if(numy->pmid == nil)
    root = numx;
  else if(numy == numy->pmid->left)
    numy->pmid->left = numx;
  else 
    numy->pmid->right = numx;
 
  if(numy != numz)
    numz->key = numy->key;
}
 
 
int main(){
  int n, j, x;
  char array[20];
   
  scanf("%d",&n);
 
  for (j = 0; j < n; j++ ){
    scanf("%s",array);
 
    if(array[0]=='i'){

      scanf("%d",&x);

      Defin(x);
    } 
    else if(array[0]=='p'){
      DefIn(root);
      printf("\n");
       
      DefPre(root);
      printf("\n");
    }
    else if(array[0]=='f'){

      scanf("%d",&x);

      Node s=Search(root,x);

      if (s!= nil ) printf("yes\n");
      else printf("no\n");
    }
    else if(array[0]=='d'){

      scanf("%d",&x);

      Delete(Search(root, x));
    }
  }
  return 0;
}