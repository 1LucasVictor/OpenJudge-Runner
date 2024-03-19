#include<stdio.h>

#define MAX 25

typedef struct{
  int p, s, deg, dep, h, left, right;
}Node;

int depth(Node *, int);
int height(Node *, int);
void Preorder(Node *, int);
void Inorder(Node *, int);
void Postorder(Node *, int);

int main(){
  int i, n, id, r;
  Node T[MAX], tmp;

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    T[i].p = -1;
    T[i].dep = 0;
    T[i].deg = 0;
    T[i].s = -1;
  }
  for(i = 0; i < n; i++){
    scanf("%d",&id);
    scanf("%d%d", &T[id].left, &T[id].right);
    T[T[id].left].p = id;
    T[T[id].right].p = id;
    if(T[id].left != -1){
      T[id].deg++;
      T[T[id].left].s = T[id].right;
    }
     if(T[id].right != -1){
      T[id].deg++;
      T[T[id].right].s = T[id].left;
    }
  }

  for(i = 0; i < n; i++){
    T[i].dep = depth(T, i);
    if(T[i].dep == 0) r = i;
    T[i].h = height(T, i);
  }
  
  printf("Preorder\n");
  Preorder(T, r);
 
  printf("\nInorder\n");
  Inorder(T, r);
 
  printf("\nPostorder\n");
  Postorder(T, r);
  printf("\n");

  return 0;
}

void Preorder(Node *T, int i){
  if(i == -1) return;
  printf("%2d",i);

  Preorder(T, T[i].left);
  
  Preorder(T, T[i].right);

}

void Inorder(Node *T, int i){
  if(i == -1) return;

  Inorder(T, T[i].left);
  printf("%2d",i);

  Inorder(T, T[i].right);
}

void Postorder(Node *T, int i){
  if(i == -1) return;

  Postorder(T, T[i].left);
  
  Postorder(T, T[i].right);
  printf("%2d",i);
}

int depth(Node *T, int i){

  if(T[i].p == -1) return 0;

  return depth(T, T[i].p) + 1;
  
}

int height(Node *T, int i){
  int righth = 0, lefth = 0;

  if(T[i].right != -1) righth = height(T, T[i].right) + 1;

  if(T[i].left != -1) lefth = height(T, T[i].left) + 1;

  if(righth >= lefth) return righth;
  else return lefth;
}