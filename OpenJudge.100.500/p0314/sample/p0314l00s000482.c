#include <stdio.h>
#define M 10000
#define N -1

struct node{
    int p,l,r;
};

struct node tree[M];
int n;

void pre(int u){
    if(u == N) return;
    printf(" %d",u);
    pre(tree[u].l);
    pre(tree[u].r);
}

void in(int u){
    if(u == N)return;
    in(tree[u].l);
    printf(" %d",u);
    in(tree[u].r);
}

void post(int u){
    if(u == N) return;
    post(tree[u].l);
    post(tree[u].r);
    printf(" %d",u);
}

int main(){
    int i,s,t,u,root;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        tree[i].p=N;
    }

    for(i=0;i<n;i++){
        scanf("%d %d %d",&s,&t,&u);
        tree[s].l=t;
        tree[s].r=u;
        if(t != N)tree[t].p=s;
        if(u != N)tree[u].p=s;
        }

        for(i=0;i<n;i++){
            if(tree[i].p==N)root = i;
        }
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
