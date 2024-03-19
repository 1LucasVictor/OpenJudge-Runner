#include <stdio.h>
#define MAX 100000

void Preorder(int);
void Inorder(int);
void Postorder(int);

int n;
int i;

struct Node{
  int p;
  int s;
  int l;
  int r;
};

struct Node T[MAX];

int main(void){
  int j,left,right,c[MAX];
  int id[MAX],p,s,deg[MAX],dep,h;
  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    T[i].p = -1;
    T[i].s = -1;
    T[i].l = -1;
    T[i].r = -1;
  }
  
  for(i = 0 ; i < n ; i++){
    scanf("%d",&id[i]);
  
    for(j = 0 ; j < 2 ; j++){
      scanf("%d",&c[j]);
      
      if(j == 0){
	left = c[j];
	T[id[i]].l = c[j];
	T[c[j]].p = id[i];
      }
      else {
	right = c[j];
	T[id[i]].r = c[j];
	T[c[j]].p = id[i];
      }
    }
  }

  for(i = 0 ; i < n ; i++){
    if(T[i].p == -1) break;
  }
  
  printf("Preorder\n");
  Preorder(i);
 
  printf("\nInorder\n");
  Inorder(i);
 
  printf("\nPostorder\n");
  Postorder(i);
  printf("\n");
  
  return 0;
}

void Preorder(int u){

  printf(" %d",u);
 
  if(T[u].l != -1){
    Preorder(T[u].l);
  }
  if(T[u].r != -1){
    Preorder(T[u].r);
  }
}

void Inorder(int u){

  if(T[u].l != -1){
    Inorder(T[u].l);
  }
  printf(" %d",u);

  if(T[u].r != -1){
    Inorder(T[u].r);
  }
}

void Postorder(int u){
   
  if(T[u].l != -1){
    Postorder(T[u].l);
  }
  if(T[u].r != -1){
    Postorder(T[u].r);
  }
  printf(" %d",u);
  
}