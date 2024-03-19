#include <stdio.h>
#define SIZE 100
#define nil -1

typedef struct{
  int par,right,left;
} node;

int n;
node t[SIZE];

void Preorder(int);
void Inorder(int);
void Postorder(int);

int main(){
  int i,root;
  scanf("%d",&n);
  for(i=0; i<SIZE; i++)t[i].par = t[i].left = t[i].right = nil;
  
  for(i=0; i<n; i++){
    int id,l,r;
    scanf("%d %d %d",&id,&l,&r);
    t[id].left = l;
    t[id].right = r;
    if(l != nil)t[l].par = id;
    if(r != nil)t[r].par = id;
  }
  
  for(i=0; i<n;i++)
    if(t[i].par == nil) root = i;

  printf("Preorder\n");
  Preorder(root);
  printf("\n");

  printf("Inorder\n");
  Inorder(root);
  printf("\n");

  printf("Postorder\n");
  Postorder(root);
  printf("\n");

  return 0;
}

void Preorder(int u){
  printf(" %d",u);
  if (t[u].left != nil)Preorder(t[u].left);
  if(t[u].right != nil)Preorder(t[u].right);
}

void Inorder(int u){
  if (t[u].left != nil) Inorder(t[u].left);
  printf(" %d",u);
  if(t[u].right != nil) Inorder(t[u].right);
}

void Postorder(int u){
  if (t[u].left != nil) Postorder(t[u].left);
  if(t[u].right != nil) Postorder(t[u].right);
  printf(" %d",u);
}

