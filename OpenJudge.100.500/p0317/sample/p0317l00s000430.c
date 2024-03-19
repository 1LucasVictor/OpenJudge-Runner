#include <stdio.h>
#include <string.h>
#define max_order 500001
#define max_str 100

typedef struct{
  int key, left, right;
}Node;

Node tree[max_order];
int size;

void insert(int x){
  int p = 0;
  while(1){
    if(x < tree[p].key){
      if(tree[p].left == -1){
        tree[p].left = size;
        tree[size++].key = x;
        break;
      }else p = tree[p].left;
    }else{
      if(tree[p].right == -1){
        tree[p].right = size;
        tree[size++].key = x;
        break;
      }else p = tree[p].right;
    }
  }
}

void inorder(int p){
  if(tree[p].left != -1) inorder(tree[p].left);
  printf(" %d",tree[p].key);
  if(tree[p].right != -1) inorder(tree[p].right); 
}

void preorder(int p){
  printf(" %d",tree[p].key);
  if(tree[p].left != -1) preorder(tree[p].left);
  if(tree[p].right != -1) preorder(tree[p].right);
}

int find(int p, int x){
  if(tree[p].key == x) return 1;
  if(x < tree[p].key && tree[p].left != -1) if(find(tree[p].left, x)) return 1;
  if(tree[p].key < x && tree[p].right != -1) if(find(tree[p].right, x)) return 1;
  return 0;
}

int main(){
  int i;
  int n,sign;
  sign = 1;
  scanf("%d", &n);
  for(i=0;i<=n;i++) tree[i].key = tree[i].left = tree[i].right = -1;
  size = 0;
  while(n--){
    char str[max_str];
    scanf("%s", str);
    if(!strcmp(str, "insert")){
      int in;
      scanf("%d", &in);
      if(sign){
        tree[size++].key = in;
        sign = 0;
      }
      else insert(in);
    }else if(!strcmp(str, "find")){
      int in;
      scanf("%d", &in);
      printf("%s\n", (find(0, in) ? "yes" : "no"));
    }else{
      inorder(0);
      printf("\n");
      preorder(0);
      printf("\n");
    }
  }
  return 0;
}

