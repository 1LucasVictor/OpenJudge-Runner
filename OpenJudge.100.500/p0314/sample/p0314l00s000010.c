#include <stdio.h>

#define MAX 10000
#define NIL -1

typedef struct node {
    int p;
    int L;
    int r;
} Node;

Node T[MAX];
int n;

void Preorder( int u );
void Inorder( int u );
void Postorder( int u );

int main() {
    int i, v, L, r, root;
    
    scanf( "%d", &n );
    for ( i = 0; i < n; i++ ) {
        T[i].p = NIL;
    }
    
    for ( i = 0; i < n; i++ ) {
        scanf( "%d%d%d", &v, &L, &r );
        T[v].L = L;
        T[v].r = r;
        if ( L != NIL ) T[L].p = v;
        if ( r != NIL ) T[r].p = v;
    }
    
    for ( i = 0; i < n; i++ ) {
        if ( NIL == T[i].p ) {
            root = i;
        }
    }
    
    printf( "Preorder\n" );
    Preorder( root );
    printf( "\n" );
    printf( "Inorder\n" );
    Inorder( root );
    printf( "\n" );
    printf( "Postorder\n" );
    Postorder( root );
    printf( "\n" );
    
    return 0;
}

void Preorder( int u ) {
    if ( NIL == u ) return;
    printf( " %d", u );
    Preorder( T[u].L );
    Preorder( T[u].r );
}

void Inorder( int u ) {
    if ( NIL == u ) return;
    Inorder( T[u].L );
    printf( " %d", u );
    Inorder( T[u].r );
}

void Postorder( int u ) {
    if ( NIL == u ) return;
    Postorder( T[u].L );
    Postorder( T[u].r );
    printf( " %d", u );
}

/*
9
0 1 4
1 2 3
2 -1 -1
3 -1 -1
4 5 8
5 6 7
6 -1 -1
7 -1 -1
8 -1 -1
 */