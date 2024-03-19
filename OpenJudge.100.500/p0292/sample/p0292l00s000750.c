#include <stdio.h>

void output( int a[], int n )
{
    int i;

    for( i = 0; i < n; i++ ) printf( "%d ", a[i] );
    printf( "\n" );
}

void bubbleSort( int a[], int n )
{
    int i, j, temp,change;
    change=0;
    for( i = 0; i < n-1; i++ ) {
        for( j = n-1; j > i; j-- ) {
            if( a[j-1] > a[j] ) {
                
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
                change=change+1;
               
            }
        }
    
    }
    output( a, n );
    printf("%d\n",change);
}

main()
{
    int a[100], N, i, c;
    scanf("%d",&N);
    for(i=0;i<N;i++){
		scanf("%d",&(a[i]));
		
	}
    c=0;

 
    bubbleSort( a, N);
 
    
}