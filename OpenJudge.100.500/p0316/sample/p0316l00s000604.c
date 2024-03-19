#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data{
  int key;
  struct data *right,*left,*parent;
};

struct data *root,*NIL;

void insert(int k){
  struct data *y = NIL;
  struct data *x = root;
  struct data *z;

  z = (struct data *)malloc(sizeof(struct data));
z -> key = k;
z -> left = NIL;
z -> right = NIL;

while(x != NIL){
  y = x;
  if(z -> key < x -> key){
    x = x -> left;
  }
  else{
    x = x -> right;
  }
}

z -> parent = y;
if(y == NIL){
  root = z;
}
else{
  if(z -> key < y -> key){
    y -> left = z;
  }
  else{
    y -> right = z;
  }
}
}

void inorder(struct data *cin){
  if(cin == NIL){
    return;
  }
  inorder(cin -> left);
  printf(" %d",cin -> key);
  inorder(cin -> right);
}
void preorder(struct data *cin){
  if(cin == NIL){
    return;
  }
  printf(" %d",cin -> key);
  preorder(cin -> left);
  preorder(cin -> right);
}

int main(){
  int n,i,x;
  char mozi[1000];

  scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%s",mozi);
    if(strcmp(mozi,"insert") == 0){
      scanf("%d",&x);
      insert(x);
    }
    else if(strcmp(mozi,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

