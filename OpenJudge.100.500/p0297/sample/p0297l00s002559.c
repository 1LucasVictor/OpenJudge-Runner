#include<stdio.h>
#include<string.h>

#define LEN 100000

typedef struct pp {
	char name[100];
	int t;
} P;

P Q[ LEN+1 ];
int head, tail, n;

void enqueue( P x )
{
	Q[ tail++ ] = x;
	if( LEN < tail ) {
		tail = 0;
	}
}

P dequeue( )
{
	if( tail == head || LEN < head ) { 
		head = 0;
	}
	return Q[ head++ ];
}

int main( int argc, char *argv[] ) 
{
	int elaps = 0;
	int i, q;
	P u;
	
	scanf( "%d%d", &n, &q );
	for ( i=0; i<n; i++ ) {
		scanf( "%s%d", Q[i].name, &Q[i].t );
	}

	head = 0;
	tail = n;	
	while( head != tail ) {
		u = dequeue( );
		if( u.t <= q ) {
			elaps += u.t;
			printf( "%s %d\n", u.name, elaps );
		} else {
			u.t -= q;
			enqueue( u );
			elaps += q;
		}
	}	
   
    return 0;
}