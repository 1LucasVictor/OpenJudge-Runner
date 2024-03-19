#include <stdio.h>
 
int main() {
    int a, b, r, tmp;
    double c;

    while ( scanf("%d %d", &a, &b) != EOF) {
        c = (double)a * (double)b;
        if ( a < b ) {
            tmp = a;
            a = b;
            b = tmp;
        }
        
        r = a % b;
        while ( r != 0 ) {
            a = b;
            b = r;
            r = a % b;
        }
        printf("%d %.0f\n", b, c/(double)b);
    }
 
  return 0;
}
