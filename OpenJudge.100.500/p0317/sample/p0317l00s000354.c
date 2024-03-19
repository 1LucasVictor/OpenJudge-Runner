#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  struct node *parent;
  int key;
  struct node *left;
  struct node *right;
}Node;

Node *head;
void insert(Node *,int);
Node *make_node(Node *,int,Node *,Node *);
void inorder_print(Node *);
void preorder_print(Node *);
void free_node(Node *);
int find(Node *,int);

int main(){
  int n,key;
  char command[7];
  head = make_node(NULL,key,NULL,NULL);
  scanf("%d",&n);
  while(n--){
    scanf("%s",command);
    if(command[0] == 'i'){
     
      scanf("%d",&key);
      insert(head->left,key);
    }
    else if(command[0] == 'f'){
      scanf("%d",&key);
      if(find(head->left,key))printf("yes\n");
      else printf("no\n");
    } 
    else{
      inorder_print(head->left);
      printf("\n");
      preorder_print(head->left);
      printf("\n");
    }
  }
  free_node(head->left);
  free(head);
}

void insert(Node *node,int in_key){
  if(node == NULL)head->left = make_node(node,in_key,NULL,NULL);
  else{
    if(node->key > in_key){
      if(node->left == NULL) node->left = make_node(node,in_key,NULL,NULL);
      else insert(node->left,in_key);
    }
    else{
      if(node->right == NULL) node->right = make_node(node,in_key,NULL,NULL);
      else insert(node->right,in_key);
    }
  }
}

Node *make_node(Node *p,int k,Node *l,Node *r){
  Node *new;

  new = malloc(sizeof(Node));
  if(new == NULL){
    free(new);
    printf("node Generation failed\n");
    exit(1);
  }
  new->parent = p;
  new->key = k;
  new->left = l; 
  new->right= r;
  return new;
}
void inorder_print(Node *next){
  if(next != NULL){
    inorder_print(next->left);
    printf(" %d",next->key);
    inorder_print(next->right);
  }
}
void preorder_print(Node *next){
  if(next != NULL){
    printf(" %d",next->key);
    preorder_print(next->left);
    preorder_print(next->right);
  }
}

int find(Node *n,int k){
  if(n->key == k)return 1;
  else if(n->key > k){
    if(n->left != NULL)return find(n->left,k);
    else return 0;
  }
  else if(n->key < k){
    if(n->right != NULL)return find(n->right,k);
    else return 0;
  }
  else return 0;
}
void free_node(Node *n){
  if(n->left != NULL){
    free_node(n->left);
    free(n->left);
  }
  if(n->right != NULL){
    free_node(n->right);
    free(n->right);
  }
}
