#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  struct node *left, *right;
  int number;
};

static struct node *root = NULL;
#define BUF_SIZE 30
#define COMMAND_MAX 500001

void insert(int num) {
  struct node *nod = malloc(sizeof(struct node));
  nod->number = num;
  nod->left = nod->right = NULL;
  if(!root) {
    root = nod;
    return;
  }
  struct node **tmp = &root;
  while(*tmp) {
#ifdef DEBUG
    printf("%d: %d\n", num, (*tmp)->number);
#endif
    tmp = ((*tmp)->number > num) ? &(*tmp)->left : &(*tmp)->right;
  }
  // tmp = &nod is not the answer!
  *tmp = nod;
  return;
}

struct node** find(int num) {
  struct node **node = &root;
  while(*node) {
    struct node *cur = *node;
    if(cur->number > num) {
      node = &cur->left;
    } else if (cur->number == num) {
      return node;
    } else {
      node = &cur->right;
    }
  }
  return NULL;
}

struct node** findmin(struct node *node) {
  struct node** min = &node;
  while(1) {
    if((*min)->left) {
      min = &(*min)->left;
    } else {
      return min;
    }
  }
  return min;
}

void delete(int num) {
  struct node **node = find(num);
  if(node == NULL) return;
  struct node *cur = *node;
  if(!cur->left && !cur->right) {
    *node = NULL;
  } else if (cur->left && cur->right) {
    struct node** pmin = findmin(cur->right);
    struct node* min = (*pmin);
    (*pmin) = min->right;
    min->left = cur->left;
    // null when cur->right is min itself
    min->right = cur->right == min ? NULL : cur->right;
    (*node) = min;
  } else {
    (*node) = cur->left ? cur->left : cur->right;
  }
  free(cur);
}

void pre_order(struct node *node) {
  if(!node) return;
  printf(" %d", node->number);
  pre_order(node->left);
  pre_order(node->right);
}

void in_order(struct node *node) {
  if(!node) return;
  in_order(node->left);
  printf(" %d", node->number);
  in_order(node->right);
}

void print(void) {
  in_order(root);
  putchar('\n');
  pre_order(root);
  putchar('\n');
}

int main(void) {
  FILE *fp = stdin;
  char line[BUF_SIZE];
  if(!fgets(line, BUF_SIZE, fp)) return 0;

  int num;
  sscanf(line, "%d", &num);

  int i, j;
  for(i = 0; i < num; i++) {
    if(!fgets(line, BUF_SIZE, fp)) return 0;
    char command[8];
    int n;
    sscanf(line, "%s %d", command, &n);
    if(!strncmp(command, "insert", 6)) {
      insert(n);
    } else if (!strncmp(command, "print", 5)) {
      print();
    } else if (!strncmp(command, "find", 4)) {
      struct node **res = find(n);
      printf("%s\n", res ? "yes" : "no");
    } else if (!strncmp(command, "delete", 6)) {
      delete(n);
    }
  }
  return 0;
}
