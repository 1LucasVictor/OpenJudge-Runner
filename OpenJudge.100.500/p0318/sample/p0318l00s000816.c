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
const int nil = -1;
int root = -1;
int z1 = 0;
int tmp = -1;

int treeMinimum(int x){
    while(node[x].l != nil){
        x = node[x].l;
    }
    return x;
}
int treeSuccessor(int x){
    if (node[x].r != nil)
        return treeMinimum(node[x].r); // case 1
    int y = node[x].p;
    while(y != nil && x == node[y].r){
        x = y;
        y = node[y].p;
    }
    return y; // case 2
}


void deleteee(int m){
    int y;
    int x;
    if(node[m].l==nil || node[m].r==nil)  y = m;
    else y = treeSuccessor(m);
    if (node[y].l != nil)
        x = node[y].l;
    else
        x = node[y].r;
    if (x != nil)
        node[x].p = node[y].p;

    if (node[y].p == nil)
        root = x;
    else
    {
        if (y == node[node[y].p].l)
            node[node[y].p].l = x;
        else
            node[node[y].p].r = x;
    }
    if (y !=m)
        node[m].k = node[y].k;
    node[y].r = tmp;
    tmp = y;
}

void insert(int k){
    int y = nil;
    int x = root;
    int z;
    if (tmp == nil) z=z1++;
    else
    {
        z = tmp;
        tmp = node[tmp].r;
    }

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
            case 'd':
                scanf("%d", &a);
                deleteee(find(root, a));
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

