#include <stdio.h>
#include <stdlib.h>

struct tmp_t {
    int S;
    int C;
};

int N;
int M;
struct tmp_t T[10];

int cmpfunc( const void *a, const void *b )
{
    return( ((struct tmp_t *)a)->S, ((struct tmp_t *)b)->S );
}

long long powten( int n )
{
    int i;
    long long ret = 1;

    for( i=0; i<n; i++ ) ret *= 10;

    return( ret );
}

/***************************************
    main
***************************************/
int main( int argc, char *argv[] )
{
    int i;
    long long ret = 0;
    int digit[10];

    if( scanf( "%d%d", &N, &M ) != 2 ) {
        puts( "Input error." );
        exit( 0 );
    }

    for( i=0; i<M; i++ ) {
        if( scanf( "%d%d", &T[i].S, &T[i].C ) != 2 ) {
            puts( "Input error." );
            exit( 0 );
        }
    }

    qsort( T, M, sizeof(struct tmp_t), cmpfunc );

    for( i=0; i<M-1; i++ ) {
        if( T[i].S == T[i+1].S && T[i].C != T[i+1].C ) {
            puts( "-1" );
            exit( 0 );
        }
    }

    if( T[0].S == 1 && T[0].C == 0 ) {
        puts( "-1" );
        exit( 0 );
    }

    for( i=1; i<=N; i++ ) digit[i] = 0;
    for( i=0; i<M; i++ ) digit[T[i].S] = T[i].C;
    for( i=1; i<=N; i++ ) ret += powten(N-i) * digit[i];
    if( ret < 100 ) ret += 100;
//for(i=0; i<=N; i++ ) printf( "digit[%d] => %d\n", i, digit[i] );

    printf( "%lld\n", ret );
}
