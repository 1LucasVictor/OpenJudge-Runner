#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

typedef struct {
  int parent;
  int left;
  int right;
} Node;

Node node[26];

int getSibling(int id) {
  int p = node[id].parent;
  if (p == -1) return -1;

  return node[p].left == id ? node[p].right : node[p].left;
}

int getDegree(int id) {
  int cnt = 0;

  if (node[id].right != -1) cnt++;
  if (node[id].left != -1) cnt++;

  return cnt;
}

int getHeight(int id, int h) {
  int left;
  int right;
  if (id == -1) {
    return h - 1;
  }

  left = node[id].left;
  right = node[id].right;
  h += 1;
  return MAX(getHeight(left, h), getHeight(right, h));
}

int getDepth(int id, int d) {
  if (node[id].parent != -1) {
    return getDepth(node[id].parent, ++d);
  }
  else {
    return d;
  }
}

char *getType(int id) {
  if (node[id].parent == -1) {
    return "root";
  }
  else if (node[id].left == -1 && node[id].right == -1) {
    return "leaf";
  }
  else {
    return "internal node";
  }
}

void preOrder(int id) {
    if (id == -1) {
        return;
    }
    printf(" %d", id);
    preOrder(node[id].left);
    preOrder(node[id].right);
}

void inOrder(int id) {
    if (id == -1) {
        return;
    }
    inOrder(node[id].left);
    printf(" %d", id);
    inOrder(node[id].right);
}

void postOrder(int id) {
    if (id == -1) {
        return;
    }
    postOrder(node[id].left);
    postOrder(node[id].right);
    printf(" %d", id);
}

int main() {
  int n, id, left, right;
  int i, root;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    node[i].parent = -1;
  }

  for (i = 0; i < n; i++) {
    scanf("%d %d %d", &id, &left, &right);
    node[id].left = left;
    node[id].right = right;
    if (left != -1) {
      node[left].parent = id;
    }
    if (right != -1) {
      node[right].parent = id;
    }
  }

  for (i = 0; i < n; i++) {
    if (node[i].parent == -1){
        root = i;
        break;
    }
  }

    printf("Preorder\n");
    preOrder(root);

    printf("\nInorder\n");
    inOrder(root);

    printf("\nPostorder\n");
    postOrder(root);
    printf("\n");



  return 0;
}

