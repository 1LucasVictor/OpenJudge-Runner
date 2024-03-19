#include <stdio.h>

    int main(){
        int x,y,z,n,m,jaw;
        scanf("%d", &n);
        scanf("%d", &m);
        x = n*m;
        y = n+m;
        z = n-m;
        jaw = x;
        if ( jaw < y) {

                jaw = y ;

        }
       else if (jaw < z) {
             jaw = z ;
        }
        printf("%d", jaw);

    return 0;
}
