#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 500000
struct Node {
  int key;
  struct Node *pa,*l,*r;/*parents left child right child*/
};
struct Node *root,*NIL;
void insert(int k){/*挿入　挿入するキー*/
  struct Node *y=NIL;
  struct Node *x=root;
  struct Node *z;
  z=(struct Node *)malloc(sizeof(struct Node));/*zノードのメモリを動的に確保*/
  z->key=k;/*zのキーをkとする*/
  z->l=NIL;
  z->r=NIL;
  while(x!=NIL){/*x　rootから*/
    y=x;/*yののーどをxとおなじものにする（最初はroot）*/
    if(z->key < y->key){/*zのキーがyのキーより小さい時*/
      x=x->l;/*xをxのleft child とする*/
    }
    else x=x->r;/*zのキーがyのキー以上の時　xをxのright child とする*/

  }
  z->pa=y;
  if(y==NIL){
    root=z;
  }else{
    if(z->key < y->key){
      y->l = z;
    }else{
      y->r = z;
    }
  }
}

void inorder(struct Node *u){
  if(u==NIL)return;
  inorder(u->l);
  printf(" %d",u->key);
  inorder(u->r);
}

void preorder(struct Node *u){
  if(u ==NIL)return;
  printf(" %d",u->key);
  preorder(u->l);
  preorder(u->r);
}
int main(){
  int str1 = 0, str2 = 0;
  int i,n,v;
  char C1[10], C2[10]="insert", C3[10]="print";
  scanf("%d",&n);
  for(i = 0 ; i < n ; i++){
    scanf("%s",C1);
    if(strcmp(C1,C2)== 0)str1= 1;
    if(strcmp(C1,C3)== 0)str2= 1;
    if(str1== 1){
      scanf("%d",&v);
      insert(v);
      str1 = 0;
    }
    else if(str2 == 1){
      str2 = 0;
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}

