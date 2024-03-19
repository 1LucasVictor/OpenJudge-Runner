#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char INS[10] = "insert";
char PRT[10] = "print";
typedef struct{
  int data;
  int *right;
  int *left;
  int *parent;
}node;

node *root;

void preorder(node *);

void insert(int k){
node *y = NULL;
node *x = root;
node *z;
 
z = (node *)malloc(sizeof(node));
z->data = k;
z->left = NULL;
z->right = NULL;

while(x != NULL){
y = x;
if(z->data < x->data){
x = x->left;
}else{
x = x->right;
}
}

z->parent = y;

if(y == NULL){
root = z;
}else{
if(z->data < y->data){
y->left = z;
}else{
y->right = z;
}
}
}
void inorder(node *u){
if(u == NULL)return;
inorder(u->left);
printf(" %d",u->data);
inorder(u->right);
}

void preorder(node *u){
if(u == NULL)return;
printf(" %d",u->data);
preorder(u->left);
preorder(u->right);
}



int main(){
  int i,datanum,input;
  char com[11];

  scanf("%d",&datanum);

  for(i=0;i<datanum;i++){
    scanf("%s",com);
    if(strcmp(com,INS) == 0){
      scanf(" %d",&input);
      insert(input);
    }else if(strcmp(com,PRT) == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else{
      continue;
    }
  }
return 0;
}

