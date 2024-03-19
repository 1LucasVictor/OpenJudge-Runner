#include<stdio.h>

struct Node {int p, y, z;};
struct Node T[10000];

int n;

void preParse(int u) {
    if (u == -1) {
        return;
    }
    
    printf(" %d", u);
    
    preParse(T[u].y);
    preParse(T[u].z);
}

void inParse(int u) {
    if (u == -1) {
        return;
    }
    
    inParse(T[u].y);
    
    printf(" %d", u);
    
    inParse(T[u].z);
}

void postParse(int u) {
    if (u == -1) {
        return;
    }
    
    postParse(T[u].y);
    postParse(T[u].z);
    
    printf(" %d", u);
}

int main() {
    int i, x, y, z, root;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        T[i].p = -1;
    }
    
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &x, &y, &z);
        
        T[x].y = y;
        T[x].z = z;
        
        if (y != -1) {
            T[y].p = x;
        }
        if (z != -1) {
            T[z].p = x;
        }
    }
    
    for (i = 0; i < n; i++) {
        if (T[i].p == -1) {
            root = i;
        }
    }
    
    printf("Preorder\n");
    preParse(root);
    putchar('\n');
    printf("Inorder\n");
    inParse(root);
    putchar('\n');
    printf("Postorder\n");
    postParse(root);
    putchar('\n');
    
    return 0;
}

