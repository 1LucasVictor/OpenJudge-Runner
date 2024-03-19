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
        i=j=end=maxPackage=0;
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
           	end--;
            i++;
            if( end <= i  ) {
                maxPackage=0;
                end=i;
                j=0;
            } else {
	            maxPackage-=gw[end];            
		        maxPackage-=gw[i-1];
	            j-=2;
            }
        }
    } else {
        gP=gMaxW;
    }
    printf( "%d\n", gP );
 
    return 0;
}