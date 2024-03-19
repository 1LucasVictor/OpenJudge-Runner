#include <stdio.h>
#define N 10000
#define NIL -1

typedef struct node{
    int p,l,r;
}Node;

Node T[N];
int n;

void preP(int u){
    if(u==NIL) return;
    printf(" %d",u);
    preP(T[u].l);
    preP(T[u].r);
}

void inP(int u){
    if(u==NIL) return;
    inP(T[u].l);
    printf(" %d",u);
    inP(T[u].r);
}

void postP(int u){
    if(u == NIL) return;
    postP(T[u].l);
    postP(T[u].r);
    printf(" %d",u);
}
int main(void){
    int i,v,l,r,root;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        T[i].p=NIL;
      }
    for(i=0; i<n; i++){
        scanf("%d %d %d",&v,&l,&r);
        T[v].l=l;
        T[v].r=r;
        if(l != NIL)
            T[l].p=v;
        if(r != NIL)
            T[r].p=v;
    }
    for(i=0; i<n; i++){
        if(T[i].p == NIL){
            root=i;
          }
        }
    puts("Preorder");

    preP(root);

    puts("");
    puts("Inorder");

    inP(root);

    puts("");
    puts("Postorder");

    postP(root);
    puts("");

    return 0;
}

