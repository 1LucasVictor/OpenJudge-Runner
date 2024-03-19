#include <stdio.h>                                                                                                                                                                  #include <stdlib.h>                                                                                                                                                                                                                                                                                                                                                     int main (void) {                                                                                                                                                                       int h, a, ans=0;                                                                                                                                                                    scanf("%d%d", &h, &a);                                                                                                                                                                                                                                                                                                                                                  while ( h > 0 ) {                                                                                                                                                                       h -= a;                                                                                                                                                                             ans++;                                                                                                                                                                          }                                                                                                                                                                                                                                                                                                                                                                       printf("%d\n", ans);                                                                                                                                                                                                                                                                                                                                                    return EXIT_SUCCESS;                                                                                                                                                            }#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int h, a, ans=0;
    scanf("%d%d", &h, &a);

    while ( h > 0 ) {
        h -= a;
        ans++;
    }

    printf("%d\n", ans);

    return EXIT_SUCCESS;
}
