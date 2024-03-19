#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_KW_LEN 16
#define CMND_LEN 8

#define TRUE 1
#define FALSE 0

typedef struct _node {
  int endFlg;
  struct _node *A;
  struct _node *C;
  struct _node *G;
  struct _node *T;
} node_t;

node_t *root = NULL;

node_t* createNewNode() {
  node_t *new;

  new = (node_t*)malloc(sizeof(node_t));
  if (new == NULL)
    exit(EXIT_FAILURE);
  new->A = NULL;
  new->C = NULL;
  new->G = NULL;
  new->T = NULL;
  new->endFlg = FALSE;
  return new;
}

void insertTree(node_t *node, char key[]) {
  int i;
  char c, tail[MAX_KW_LEN];

  // first time
  if (node == NULL) {
    root = createNewNode();
    if (key[0] == '\0')
      root->endFlg = TRUE;
  }

  c = key[0];
  for (i = 0; i < strlen(key); i++)
    tail[i] = key[i + 1];

  switch (c) {
  case 'A':
    if (node->A == NULL)
      node->A = createNewNode();
    if (tail[0] == '\0')
      node->A->endFlg = TRUE;
    else
      insertTree(node->A, tail);
    break;
  case 'C':
    if (node->C == NULL)
      node->C = createNewNode();
    if (tail[0] == '\0')
      node->C->endFlg = TRUE;
    else
      insertTree(node->C, tail);
    break;
  case 'G':
    if (node->G == NULL)
      node->G = createNewNode();
    if (tail[0] == '\0')
      node->G->endFlg = TRUE;
    else
      insertTree(node->G, tail);
    break;
  case 'T':
    if (node->T == NULL)
      node->T = createNewNode();
    if (tail[0] == '\0')
      node->T->endFlg = TRUE;
    else
      insertTree(node->T, tail);
    break;
  default:
    printf("Not defining character!");
    break;
  }
}

int findTree(node_t *node, char key[]) {
  int i;
  char c, tail[MAX_KW_LEN];
  node_t *child;

  if (!strcmp(key, "") && node->endFlg == TRUE)
    return TRUE;
  else if (!strcmp(key, "") && node->endFlg == FALSE)
    return FALSE;
  else {
    c = key[0];
    for (i = 0; i < strlen(key); i++)
      tail[i] = key[i + 1];

    switch (c) {
    case 'A':
      child = node->A;
      break;
    case 'C':
      child = node->C;
      break;
    case 'G':
      child = node->G;
      break;
    case 'T':
      child = node->T;
      break;
    default:
      printf("Not defining character!");
      break;
    }
    if (child == NULL)
      return FALSE;
    else
      return findTree(child, tail);
  }
}

void freeTree(node_t *node) {
  if (node == NULL)
    return;
  freeTree(node->A);
  freeTree(node->C);
  freeTree(node->G);
  freeTree(node->T);
  free(node);
}

int main(void) {
  int i, n;
  char word[MAX_KW_LEN], command[CMND_LEN];

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s %s", command, word);
    if (!strcmp(command, "insert")) {
      insertTree(&root, word);
    }
    else if (!strcmp(command, "find")) {
      if ((findTree(&root, word)) == TRUE)
  	printf("yes\n");
      else
  	printf("no\n");
    }
    else
      printf("Not available command!");
  }
  freeTree(root);

  return 0;
}