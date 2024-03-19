#include<stdio.h>
#define MAX 10000
#define NO -1

struct tree { int p, l, r;};
struct tree T[MAX];
int n;

void Preorder ( int u ) {
    if ( u == NO ) return;
    printf(" %d", u);
    Preorder(T[u].l);
    Preorder(T[u].r);
}

void Inorder ( int u ) {
    if ( u == NO ) return;
    Inorder(T[u].l);
    printf(" %d", u);
    Inorder(T[u].r);
}

void Postorder ( int u ) {
    if ( u == NO ) return;
    Postorder(T[u].l);
    Postorder(T[u].r);
    printf(" %d", u);
}

int main(void) {
    int i, v, l, r, f, root;
    scanf("%d", &n);
    for ( i = 0; i < n; i++ ) {
        T[i].p = NO;
    }

    for ( i = 0; i < n; i++ ) {
        scanf("%d %d %d", &v, &l, &r);
        T[v].l = l;
        T[v].r = r;
        if ( l != NO ) T[l].p = v;
        if ( r != NO ) T[r].p = v;
    }

    for ( i = 0; i < n; i++ ) {
        if ( T[i].p == NO ) root = i;
    }

    printf("Preorder\n");
    Preorder(root);
    printf("\nInorder\n");
    Inorder(root);
    printf("\nPostorder\n");
    Postorder(root);
    printf("\n");

    return 0;

}