#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int k;
    int p;
    int l;
    int r;
}Node;

Node node[500002];
int nil = -1;
int root = -1;
int z;

void insert(int k){
    int y = nil;
    int x = root;
    z++;
    node[z].k = k;
    node[z].l = nil;
    node[z].r = nil;

    while(x != nil){
        y = x;
        if(node[z].k < node[x].k){
            x = node[x].l;
        }
        else x = node[x].r;
    }
    node[z].p = y;
    if(y == nil){
        root = z;
    }
    else{
        if(node[z].k < node[y].k){
            node[y].l = z;
        }
        else node[y].r = z;
    }
}

void inorder(int ppp){
    if (ppp == nil) return;
    inorder(node[ppp].l);
    printf(" %d", node[ppp].k);
    inorder(node[ppp].r);
}

void preorder(int ppp){
    if (ppp == nil) return;
    printf(" %d", node[ppp].k);
    preorder(node[ppp].l);
    preorder(node[ppp].r);
}

int find(int a, int k){
    while(a!=nil && k!=node[a].k){
        if(k<node[a].k) a = node[a].l;
        else a = node[a].r;
    }
    return a;
}


int main()
{
    char cccc[20];
    int n;
    int a;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", cccc);
        switch (cccc[0]){
            case 'f':
                scanf("%d", &a);
                if(find(root, a) != nil) printf("yes\n");
                else printf("no\n");
                break;
            case 'i':
                scanf("%d", &a);
                insert(a);
                break;
            default:
                inorder(root);
                printf("\n");
                preorder(root);
                printf("\n");
                break;
        }
    }
    return 0;
}
