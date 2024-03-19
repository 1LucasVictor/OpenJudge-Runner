#include<stdio.h>
void preParse(int);
void Inorder(int);
void Postorder(int);

typedef  struct{
  int parent,left,right;
}Node;

Node T[25];

int main(){

  int i,n,a,b,c,num;
  scanf("%d",&n);

  for(i=0; i<n; i++) T[i].parent = -1;

  for(i=0; i<n; i++){
    scanf("%d%d%d",&a,&b,&c);

    T[a].left = b;
    T[a].right = c;
    if(T[a].right != -1) T[b].parent = a;
    if(T[a].left != -1) T[c].parent = a;

  }


  for(i=0; i<n; i++){
    if(T[i].parent == -1) num = i;
  }

  printf("Preorder\n");
  preParse(num);
  printf("\nInorder\n");
  Inorder(num);
  printf("\nPostorder\n");
  Postorder(num);
  printf("\n");
  return 0;
}


void preParse(int u){
  if (u == -1) return;
  printf (" %d",u);
  preParse(T[u].left);
  preParse(T[u].right);
}

void Inorder(int u){
  if (u == -1) return;
  Inorder(T[u].left);
  printf (" %d",u);
  Inorder(T[u].right);
}

void Postorder(int u){
  if (u == -1) return;
  Postorder(T[u].left);    
  Postorder(T[u].right);
  printf (" %d",u);
}