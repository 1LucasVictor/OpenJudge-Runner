#include <stdio.h>

int parent[25];
int left[25];
int right[25];

void preorder(int node){
    if(node == -1) return;
    printf(" %d", node);
    preorder(left[node]);
    preorder(right[node]);
}

void inorder(int node){
    if(node == -1) return;
    inorder(left[node]);
    printf(" %d", node);
    inorder(right[node]);
}

void postorder(int node){
    if(node == -1) return;
    postorder(left[node]);
    postorder(right[node]);
    printf(" %d", node);
}

int main(void){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        parent[i] = -1;
    for(int i=0; i<n; i++){
        int id, l, r;
        scanf("%d%d%d", &id, &l, &r);
        left[id] = l;
        right[id] = r;
        if(l != -1) parent[l] = id;
        if(r != -1) parent[r] = id;
    }
    int root = 0;
    for(;root < n; root++)
        if(parent[root] == -1)
            break;
    puts("Preorder");
    preorder(root);
    puts("");
    puts("Inorder");
    inorder(root);
    puts("");
    puts("Postorder");
    postorder(root);
    puts("");
}

