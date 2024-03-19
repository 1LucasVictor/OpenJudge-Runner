#include<stdio.h>

#define MAXWI 10000

int gP,gSum,gMaxI,gMaxW;
int gw[MAXWI+1];
int gn,gk;

void carryPackage( int mi,  int sus )
{
	int start,end,i;
	int tmpk;
	int maxPackage,package;

	package=start=end=0;

	start=mi-sus;
	if( 0 < start ) {
		maxPackage=0;
		for( i=start; i<=mi; i++ ) {
			maxPackage+=gw[i];
		}
		tmpk=gk;
		package=0;
	    for( i=0; i<gn; i++ ) {
	    	package+=gw[i];
	    	if( maxPackage <= package ) {
    			tmpk--;
    			if( tmpk < 0 ) { break; }
    			package=0;
    			i--;
	    	}
	    }
	}
		
	if( 1 < sus ) {
		start=mi-(sus-1);
		end=mi+(sus-1);
		if( 0 < start && end < gn ) {
			maxPackage=0;
			for( i=start; i<=end; i++ ) {
				maxPackage+=gw[i];
			}
			tmpk=gk;
			package=0;
		    for( i=0; i<gn; i++ ) {
		    	package+=gw[i];
		    	if( maxPackage <= package ) {
	    			tmpk--;
	    			if( tmpk < 0 ) { break; }
	    		    package=0;
					i--;
		    	}
		    }
		}
	}
	
	end=mi+sus;
	if( end < gn ) {
		maxPackage=0;
		for( i=mi; i<=end; i++ ) {
			maxPackage+=gw[i];
		}
		tmpk=gk;
		package=0;
	    for( i=0; i<gn; i++ ) {
	    	package+=gw[i];
	    	if( maxPackage <= package ) {
    			tmpk--;
    			if( tmpk < 0 ) { break; }
    			package=0;
    			i--;
	    	}
	    }
	}

	if( 0==tmpk ) {
		if( gP < maxPackage ) {
			gP=maxPackage;
		}
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
    gP=gMaxW;

    if( 1 == gk ) {
    	gP=gSum;	
    } else if( gk < gn ) {
	  	i=j=0;
	  	while( i < gn ) {
		  	j=0;
		  	while( 0<(i-j) || (i+j) < gn ) {
		  		carryPackage( i, j );
				j++;
		  	}
		  	i++;
	  	}
	}
	printf( "%d\n", gP );

    return 0;
}