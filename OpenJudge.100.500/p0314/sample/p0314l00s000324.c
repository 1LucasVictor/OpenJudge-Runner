#include<stdio.h>
#define MAX 100000
#define NIL -1

typedef struct node{int p,l,r;}node;
node T[MAX];
int n;

void preparse(int a){
    if(a==NIL)return;
    printf(" %d",a);
    preparse(T[a].l);
    preparse(T[a].r);
}

void inparse(int b){
    if(b==NIL)return;
    inparse(T[b].l);
    printf(" %d",b);
    inparse(T[b].r);
}

void postparse(int c){
    if(c==NIL)return;
    postparse(T[c].l);
    postparse(T[c].r);
    printf(" %d",c);
}

int main(){
    int i,v,l,r,root;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        T[i].p=NIL;
    }
    for(i=0;i<n;i++){
        scanf("%d%d%d",&v,&l,&r);
        T[v].l=l;
        T[v].r=r;
        if(l!=NIL)T[l].p=v;
        if(r!=NIL)T[r].p=v;
    }
    for(i=0;i<n;i++) if(T[i].p==NIL) root=i;

    printf("Preorder\n");
    preparse(root);
    printf("\n");
    printf("Inorder\n");
    inparse(root);
    printf("\n");
    printf("Postorder\n");
    postparse(root);
    printf("\n");

    return 0;
}
