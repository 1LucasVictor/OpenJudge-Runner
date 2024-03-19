#include<stdio.h>

#define MAX 100005
#define NIL -1
   
struct Node{
  int p, l, r;
};

struct Node N[MAX];
int n;

void Preorder(int u){
  if(u != NIL){
    printf(" %d", u); 
    Preorder(N[u].l);
    Preorder(N[u].r);
  }
}

void Inorder(int u){
  if(u != NIL){
    Inorder(N[u].l);
    printf(" %d", u);
    Inorder(N[u].r);
  }
}

void Postorder(int u){
  if(u != NIL){
    Postorder(N[u].l);
    Postorder(N[u].r);
    printf(" %d", u);
  }
}

int main(){
  int i, j, d, v, c, l;
  int first;
  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    N[i].p = N[i].l = N[i].r = NIL;
  }
  
  for (i = 0; i < n; i++){
    scanf("%d %d %d", &v, &d, &c);
    if(i == 0) first = v;
    N[d].p = v;
    N[c].p = v;
    N[v].l = d;
    N[v].r = c;
  }
  
  for(i = 0; i < n; i++){
    if(N[i].p == NIL){
      first = i;
      break;
    }
  }
  
  printf("Preorder\n");
  Preorder(first);
  
  printf("\n");
  printf("Inorder\n");
  Inorder(first);
  
  printf("\n");
  printf("Postorder\n");
  Postorder(first);
  
  printf("\n");
  return 0;
}