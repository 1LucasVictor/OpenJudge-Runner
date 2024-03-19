#include<stdio.h>
#define MAX 100005
#define NIL -1
 
typedef struct{
  int parent, left, right;
}Node;
 
Node Tree[MAX];
int Depth[MAX];
int degree[MAX];
int h;
 
void preOrder(int);
void inOrder(int);
void postOrder(int);
 
int main(void){
  int i, n, root;
  int vertex;
  int child[2];
 
 
  scanf("%d", &n);
 
  for ( i = 0; i < n; i++ ) {
    Tree[i].parent = NIL;
    Tree[i].left = NIL;
    Tree[i].right = NIL;
  }
 
  for ( i = 0; i < n; i++ ){
    scanf("%d %d %d", &vertex, &child[0], &child[1]);
 
   
    if(child[0] == NIL && child[1] == NIL)
      degree[vertex] = 0;
 
    
    else if(child[0] == NIL && child[1] != NIL){
      degree[vertex] = 1;
      Tree[child[1]].parent = vertex;
      Tree[vertex].right = child[1];
    }
     
    else if(child[0] != NIL && child[1] == NIL){
      degree[vertex] = 1;
      Tree[child[0]].parent = vertex;
      Tree[vertex].left = child[0];
    }
 
 
   
    else{
      degree[vertex] = 2;
      Tree[child[0]].parent = vertex;
      Tree[child[1]].parent = vertex;
       
      Tree[vertex].left = child[0];
      Tree[vertex].right = child[1];
    }
  }

  for (i = 0; i < n; i++)
  {
    if (Tree[i].parent == NIL){
      root = i;
    }
  }

  printf("Preorder\n");
  preOrder(root);
  printf("\n");
 
  printf("Inorder\n");
  inOrder(root);
  printf("\n");
 
  printf("Postorder\n");
  postOrder(root);
  printf("\n");
 
  return 0;
}
 
void preOrder(int n) {
  if(n == NIL)return;
  printf(" %d", n);
  preOrder(Tree[n].left);
  preOrder(Tree[n].right);
}
 
void inOrder(int n) {
  if(n == NIL)return;
  inOrder(Tree[n].left);
  printf(" %d", n);
  inOrder(Tree[n].right);
}
 
void postOrder(int n) {
  if(n == NIL)return;
  postOrder(Tree[n].left);
  postOrder(Tree[n].right);
  printf(" %d", n);
}
 


