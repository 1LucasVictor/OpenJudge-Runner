#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NIL -1
#define Length 500005
typedef struct node{
  int key;
  struct node *p;
  struct node *l;
  struct node *r;
} Tree;
Tree *root = NULL;
void insert(int key){
  Tree *c = (Tree*)malloc(sizeof(Tree));
  c -> key = key;
  Tree *x, *y;
  x = root;
  y = NULL;
  while(x != NULL){
    y = x;
    if(c -> key < x -> key)
      x = x -> l;
    else
      x = x -> r;
  }
  c -> p = y;
  c -> l = NULL;
  c -> r = NULL;
  if(y == NULL){
    root = c;
  }else if(c -> key < y -> key){
    y -> l = c;
  }else{
    y -> r = c;
  }

}
void printInorder(Tree *u){
  if(u == NULL)
    return;
  printInorder(u -> l);
  printf(" %d", u -> key);
  printInorder(u -> r);
}
void printPreorder(Tree *u){
  if(u == NULL)
    return ;
  printf(" %d", u -> key);
  printPreorder(u -> l);
  printPreorder(u -> r);
}
int main(){
  char line[100];
  int n;
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &n);
  char *str_ptr;
  int key;
  for(int i = 0; i < n; ++i){
    fgets(line, sizeof(line), stdin);
   
    if(strcmp(line, "print") == 0 || strcmp(line, "print\n") == 0){
      printInorder(root);
      printf("\n");
      printPreorder(root);
      printf("\n");
    }else{
      str_ptr = strtok(line, " ");
      if(strcmp(str_ptr, "insert") == 0){
        str_ptr = strtok(NULL, " ");
        sscanf(str_ptr, "%d", &key);
        insert(key);
      } 
    }
  } 
 
  return 0;
}

