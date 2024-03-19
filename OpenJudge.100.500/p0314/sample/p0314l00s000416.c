#include<stdio.h>
 

struct NODE {

  int right;
  int left;
  int parent;
   
};
typedef struct NODE NODE;

#define MAX 25
#define ROOT -1
#define NONODE -1
 

 
NODE nodes[ MAX+1 ];

void walkPreorder( int i );
void walkInorder( int i );
void walkPostorder( int i );


 
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


void walkPreorder( int i )
{
    if( NONODE == i ) { return; }
     
    printf( " %d", i );
    walkPreorder( nodes[i].left );
    walkPreorder( nodes[i].right );
     
    return;
}

void walkInorder( int i )
{
    if( NONODE == i ) { return; }
     
    walkInorder( nodes[i].left );
    printf( " %d", i );
    walkInorder( nodes[i].right );
     
    return;
}


void walkPostorder( int i )
{   
    if( NONODE == i ) { return; }
 
    walkPostorder( nodes[i].left );
    walkPostorder( nodes[i].right );
    printf( " %d", i );
     
    return;
}

