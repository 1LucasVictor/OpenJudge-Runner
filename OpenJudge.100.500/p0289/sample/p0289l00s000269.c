#include <stdio.h>
  
int GCD( int NO_1, int NO_2 );
  
int main(void)
{
    int NO_1 = 0;
    int NO_2 = 0;
 
    scanf("%d %d", &NO_1, &NO_2);
 
    printf("%d\n", GCD(NO_1, NO_2));
      
    return 0;
}
  
int GCD( int NO_1, int NO_2 ) {

    if ( NO_1 > NO_2 ) {
        if (NO_1 % NO_2 != 0) {
            return GCD( NO_1 % NO_2, NO_2 );
        } else {
            return NO_2;
        }
    } else {
        if ( NO_2 % NO_1 != 0 ) {
            return GCD( NO_1, NO_2 % NO_1 );
        } else {
            return NO_1;
        }
    }
}
