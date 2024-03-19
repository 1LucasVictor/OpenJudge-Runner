#include<stdio.h>
#define N -1

struct tree {int m, l, r;};
struct tree T[10000];
int n;

void preorder(int b){

    if(b == N) return;
    printf(" %d", b); 
    preorder(T[b].l);
    preorder(T[b].r);
}
void inorder(int b){

    if(b == N) return;
    inorder(T[b].l);
    printf(" %d", b); 
    inorder(T[b].r);
}
void postorder(int b){

    if(b == N) return;
    postorder(T[b].l);
    postorder(T[b].r);
    printf(" %d", b); 
}
int main()
{
    int i,  j, l, r, b;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        T[i].m = N;
    }

    for(i = 0; i < n; i++){
        scanf("%d %d %d", &j, &l, &r );
        T[j].l = l;
        T[j].r = r;
        if(l != N) T[l].m = j;
        if(r != N) T[r].m = j;
    }

    for(i = 0; i < n; i++) if(T[i].m == N) b = i;
    printf("Preorder\n");
    preorder(b);
    printf("\n");
    printf("Inorder\n");
    inorder(b);
    printf("\n");
    printf("Postorder\n");
    postorder(b);
    printf("\n");

    return 0;
}
