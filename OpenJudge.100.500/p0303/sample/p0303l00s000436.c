#include<stdio.h>
#define MAXWI 100000
 
int gP,gSum,gMaxW;
int gw[MAXWI+1];
int gn,gk;
 
 
void carryPackage( int maxPackage )
{
    int i;
    int tmpk;
    int package;
     
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
                if( maxPackage*tmpk < gn-i ) { break; }
                if( tmpk == 0 ) { break; }
                package=0;     
            }
            i++;
        }
        if( 1<=tmpk || (0==tmpk && i == (gn-1)) ) {
            gP=maxPackage;
        }
    }
     
    return;
}
 
 
int main( void ) 
{
    int i,j;
    int end;
    int maxPackage;
         
    scanf( "%d%d", &gn, &gk );

    end=gn/gk;
    maxPackage=gMaxW=gSum=0;
   for( i=0; i<end; i++ ) {
        scanf( "%d", &gw[i] );
        if( gMaxW < gw[i] ) {
            gMaxW=gw[i];
        }
        maxPackage+=gw[i];
        gSum+=gw[i];
    }   
    for( i=end; i<gn; i++ ) {
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
	  	i=0;
	  	j=end;
        if( gMaxW < gSum/gk ) { gMaxW=gSum/gk; }
        while( i < gn ) {
            while( end < gn ) {
                maxPackage+=gw[end];
                if(  maxPackage < gP ) {
                    carryPackage( maxPackage );
                } else {
                    break;
                }
                j++;
                end=i+j;
            }
 
            maxPackage-=gw[end];
            maxPackage-=gw[end-1];            
	        maxPackage-=gw[i];
           	end--;
            j-=2;
            i++;
            if( end <= i  ) {
                maxPackage=0;
                end=i;
                j=0;
            }
        }
    } else {
        gP=gMaxW;
    }
    printf( "%d\n", gP );
 
    return 0;
}