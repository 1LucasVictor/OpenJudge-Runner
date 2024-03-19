#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
        int week;
        int i;
        int debt = 100000;
        int tmp;

        scanf( "%d", &week );
        for ( i = 0 ; i < week ; i++ )
        {
                debt = debt + 100000 * 0.05;
        }

        tmp = debt / 1000;
        tmp = tmp % 10;
        if ( tmp > 0 )
        {
                debt = debt - tmp*1000 + 10000;
        }

        printf( "%d\n", debt );

        return 0;
}