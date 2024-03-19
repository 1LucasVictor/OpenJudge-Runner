#include<stdio.h>

#define MAXWI 10000

int main( void ) 
{
    int n,k;
    int w[MAXWI+1];
    int i;
    int P,tmpP;
    int sum,maxi,package;
        
    scanf( "%d%d", &n, &k );
    
    P=maxi=sum=0;
    for( i=0; i<n; i++ ) {
    	scanf( "%d", &w[i] );
    	if( maxi < w[i] ) {
    		maxi=w[i];
    	}
    	sum+=w[i];
    }

    package=0;
	if( k < n ) {
	    tmpP=sum;
		if( 1 < k ) {
		    for( i=0; i<n; i++ ) {
		    	package+=w[i];
		    	if( maxi <= package ) {
		    		k--;
		    		if( maxi==package ) {
		    			package=0;
		    		} else {
		    			if( package < tmpP ) {
		    				tmpP=package;
		    			}
		    			package=w[i];
		    		}
		    	}
		    }
		   	if( 0 == k ) {
		    	P=tmpP;
		    } else {
		    	P=maxi;
		    }
	    } else {
	    	P=tmpP;
	    }
	} else if( n <= k ) {
		P=maxi;
		if( 1 == k ) {
			P=sum;	
		}
	}
	
	printf( "%d\n", P );

    return 0;
}