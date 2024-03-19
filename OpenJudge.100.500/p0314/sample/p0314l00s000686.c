#include<stdio.h>

#define MAX 25
#define ROOT -1
#define NONODE -1

struct NODE {
	int parent;
	int left;
	int right;
};

typedef struct NODE NODE;

NODE nodes[ MAX+1 ];

void walkPreorder( int i )
{
	if( NONODE == i ) { return; }
	
	printf( " %d", i );
	if( NONODE != nodes[i].left ) {
		walkPreorder( nodes[i].left );
	}
	if( NONODE != nodes[i].right ) {
		walkPreorder( nodes[i].right );
	}
	return;
}
void walkInorder( int i )
{
	if( NONODE == i ) { return; }
	
	if( NONODE != nodes[i].left ) {
		walkInorder( nodes[i].left );
	} else if( NONODE == nodes[i].left && NONODE == nodes[i].right ) {
		printf( " %d", i );
		return;
	}
	printf( " %d", i );
	if( NONODE != nodes[i].right ) {
		walkInorder( nodes[i].right );
	}
	return;
}
void walkPostorder( int i )
{	
	if( NONODE == i ) { return; }
	
	if( NONODE != nodes[i].left ) {
		walkPostorder( nodes[i].left );
	} else if( NONODE == nodes[i].left && NONODE == nodes[i].right ) {
		printf( " %d", i );
		return;
	}
	if( NONODE != nodes[i].right ) {
		walkPostorder( nodes[i].right );
	}
	printf( " %d", i );
	
	return;
}

int main( void ) 
{   
    int n;
    int root,left,right,id;
    int i;
	       
    scanf( "%d", &n );

	for( i=0; i<n; i++ ) {
		nodes[i].parent=ROOT;
    }    
    for( i=0; i<n; i++ ) {
    	scanf( "%d%d%d", &id, &left, &right );
	    nodes[id].left=left;
    	if( -1 != left ) {
	    	nodes[left].parent=id;
    	}
	    nodes[id].right=right;
    	if( -1 != right ) {
	    	nodes[right].parent=id;
    	}
    }
    root=ROOT;
	for( i=0; i<n; i++ ) {
        if( ROOT == nodes[i].parent ) {
            root=i;
            break;
        }
     }
	printf( "Preorder\n" );
	walkPreorder( root );
	printf( "\n" );
	
	printf( "Inorder\n" );
	walkInorder( root );
	printf( "\n" );
	
	printf( "Postorder\n" );
	walkPostorder( root );
	printf( "\n" );

    return 0;
}