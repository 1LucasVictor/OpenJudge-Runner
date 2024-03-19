#include <stdio.h>
#define MAX 10000
#define NIL -1

struct Node {
    int p,l,r;
};

struct Node t[MAX];
int n;

void pre(int );
void in(int );
void post(int );

int main(){
    int i,v,l,r,root;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        t[i].p=NIL;
    }
    
    for(i=0;i<n;i++){
        scanf("%d %d %d",&v,&l,&r);
        t[v].l=l;
        t[v].r=r;
        if(l!=NIL) t[l].p=v;
        if(r!=NIL) t[r].p=v;
    }
    
    for(i=0;i<n;i++) if(t[i].p==NIL) root=i;
    
    printf("Preorder\n");
    pre(root);
    printf("\n");
    printf("Inorder\n");
    in(root);
    printf("\n");
    printf("Postorder\n");
    post(root);
    printf("\n");
    
    return 0;
}

void pre(int u){
    if(u==NIL) return;
    printf(" %d",u);
    pre(t[u].l);
    pre(t[u].r);
}

void in(int u){
    if(u==NIL)return;
    in(t[u].l);
    printf(" %d",u);
    in(t[u].r);
}

void post(int u){
    if(u==NIL)return;
    post(t[u].l);
    post(t[u].r);
    printf(" %d",u);
}


