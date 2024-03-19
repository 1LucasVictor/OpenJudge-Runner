#include <stdio.h>
#define N 25
#define NIL -1

typedef struct{ 
    int l;
    int p;
    int r;
}Node;

void preorder( int u );
void inorder ( int u );
void postorder( int u );
Node A[N+1];

int main(){
    int n, i, k, l, r;

    //input
    scanf("%d", &n);
    for( i=0; i<=n; i++ ) A[i].l = A[i].p = A[i].r = NIL;
    for( i=0; i<n; i++ ){
	scanf("%d%d%d", &k, &l, &r);
	A[k].l = l;
	A[k].r = r;
	A[l].p = A[r].p = k;//resister the parent
    }
    //find root node
    for( i=0; i<n; i++ ) if( A[i].p == NIL ) break;

    //tree walk and print
    printf("Preorder\n");
    preorder( i );
    printf("\nInorder\n");
    inorder( i );
    printf("\nPostorder\n");
    postorder( i );
    printf("\n");

    return 0;
}

void preorder( int u ){
    if( u == NIL ) return ;
    printf(" %d", u);
    preorder( A[u].l );
    preorder( A[u].r );

    return ;
}

void inorder( int u ){
    if( u == NIL ) return ;
    
    inorder( A[u].l );
    printf(" %d", u);
    inorder( A[u].r );
    
    return ;
}

void postorder( int u ){
    if( u == NIL ) return ;

    postorder( A[u].l );
    postorder( A[u].r );
    printf(" %d", u);

    return ;
}

