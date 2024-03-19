#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define N 500000

typedef struct{
  int key, left, right;
}Node;

Node tree[N+1];
int size;

void insert(int x){
  int a = 0;
  while(1){
    if(x < tree[a].key){
      if(tree[a].left == -1){
        tree[a].left = size;
        tree[size++].key = x;
        break;
      }else a = tree[a].left;
    }else{
      if(tree[a].right == -1){
        tree[a].right = size;
        tree[size++].key = x;
        break;
      }else a = tree[a].right;
    }
  }
}

void inorder(int a){
  if(tree[a].left != -1) inorder(tree[a].left);
  printf(" %d", tree[a].key);
  if(tree[a].right != -1) inorder(tree[a].right);
}

void preorder(int a){
  printf(" %d", tree[a].key);
  if(tree[a].left != -1) preorder(tree[a].left);
  if(tree[a].right != -1) preorder(tree[a].right);
}

int find(int a, int x){
  if(tree[a].key == x) return 1;
  if(x < tree[a].key && tree[a].left != -1) if(find(tree[a].left, x)) return 1;
  if(tree[a].key < x && tree[a].right != -1) if(find(tree[a].right, x)) return 1;
  return 0;
}

main(){
  int n, i, f;
  f = 1;
  scanf("%d", &n);
  if(n > N)exit(1);

  for(i = 0 ; i <= n ; i++) tree[i].key = tree[i].left = tree[i].right = -1;
  size = 0;
  while(n--){
    char str[100];
    scanf("%s", str);
    if(!strcmp(str, "insert")){
      int in;
      scanf("%d", &in);
      if(f){
        tree[size++].key = in;
        f = 0;
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

