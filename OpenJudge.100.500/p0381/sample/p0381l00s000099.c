#include <stdio.h>

int main(void)
{
    int i , j , k , count;
    int n , m;

        while ( 1 ) {
                scanf("%d %d" , &n , &m);
                count = 0;

                if ( n == 0 && m == 0 )
                    break;

                    for ( i = 1 ; i <= n ; i ++ ) {
                        for ( j = 1 ; j <= n ; j++ ) {
                            for ( k = 1 ; k <= n ; k++ ) {

                                if ( i + j + k == m && i !=  j && j != k && i != k )
                                    count++;

                            }
                        }
                    }

                printf("%d\n" , count / 6);

        }  

    return 0;

}

