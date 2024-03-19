#include <stdio.h>
#define max 30
#define NIL -1
  
typedef struct node_ {
    int parent;
    int left;
    int right;
} Node;
  
Node N[max];
  
void pre(int s) {
    if (s == -1) return;
  
    printf(" %d", s);
    pre(N[s].left);
    pre(N[s].right);
}
  
void in(int t) {
    if (t == -1) return;
  
    in(N[t].left);
    printf(" %d", t);
    in(N[t].right);
}
  
void post(int u) {
    if (u == -1) return;
  
    post(N[u].left);
    post(N[u].right);
    printf(" %d", u);
}
  
int main(void) {
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        N[i].parent = -1;
        N[i].left = -1;
        N[i].right = -1;
    }
  
    for (i = 0; i < n; i++) {
        int id, left, right;
        scanf("%d %d %d", &id, &left, &right);
        N[id].left = left;
        N[id].right = right;
        if (left != NIL) N[left].parent = id;
        if (right != NIL) N[right].parent = id;
    }
  
    int r;
    for (i = 0; i < n; i++) {
        if (N[i].parent == -1) r = i;
    }
  
    printf("Preorder\n");
    pre(r);
    printf("\n");
    
    printf("Inorder\n");
    in(r);
    printf("\n");
    
    printf("Postorder\n");
    post(r);
    printf("\n");
  
    return 0;
}
