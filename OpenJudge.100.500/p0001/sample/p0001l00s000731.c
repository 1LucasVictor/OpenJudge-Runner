#include <stdio.h>
int main(void){
    int i,a,b,s,result;
    result = 0;

    while( scanf( "%d %d" , &a , &b ) != EOF ){
        s = a + b;    
        if( s >= 1000000 ){ result = 7;
        }else if( s >= 100000 ){ result = 6;
        }else if( s >= 10000 ){ result = 5;
        }else if( s >= 1000 ){ result = 4;
        }else if( s >= 100 ){ result = 3;
        }else if( s >= 10 ){ result = 2;
        }else{ result = 1; }
        printf( "%d\n", result );
    }
}
