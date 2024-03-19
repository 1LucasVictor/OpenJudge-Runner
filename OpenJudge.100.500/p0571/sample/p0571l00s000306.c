#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
       int n, a, b;

       scanf("%d %d %d", &n, &a, &b);

       if( a * n > b )
              printf("%d\n", b);
       else
              printf("%d\n", a * n );
      
       return 0;
}