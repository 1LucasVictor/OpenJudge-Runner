#include<stdio.h>
#define MAXWI 10000

int gP,gSum,gMaxW;
int gw[MAXWI+1];
int gn,gk;


void carry( int start, int end )
{
	int i;
	int tmpk;
	int maxPackage,package;
		
	maxPackage=0;
	for( i=start; i<=end; i++ ) {
		maxPackage+=gw[i];
	}
	if( gMaxW <= maxPackage ) {
		tmpk=gk;
		package=i=0;
	    while( i < gn ) {
	    	package+=gw[i];
	    	if( maxPackage <= package ) {
    		    if( maxPackage < package ) {
					i--;
				}
    			tmpk--;
				if( tmpk == 0 ) { break; }
				package=0; 			
	    	}
	    	i++;
	    }
	    if( 1<=tmpk || (0==tmpk && i == (gn-1)) ) {
			if( maxPackage < gP ) {
				gP=maxPackage;
			}
		}
	} 	     

	return;
}	


void carryPackage( int mi,  int sus )
{
	int end;

	end=mi+sus;
	if( end < gn ) {
		carry( mi, end );
	}
	
	return;
}


int main( void ) 
{
    int i,j;
        
    scanf( "%d%d", &gn, &gk );
    
    gMaxW=gSum=0;
    for( i=0; i<gn; i++ ) {
    	scanf( "%d", &gw[i] );
    	if( gMaxW < gw[i] ) {
    		gMaxW=gw[i];
    	}
    	gSum+=gw[i];
    }
    gP=gSum;

    if( 1 == gk ) {
    	gP=gSum;	
    } else if( gk < gn ) {
	  	i=j=0;
	  	while( i < gn ) {
		  	j=0;
		  	while( (i+j) < gn ) {
		  		carryPackage( i, j );
				j++;
		  	}
		  	i++;
	  	}
	} else {
		gP=gMaxW;
	}
	printf( "%d\n", gP );

    return 0;
}