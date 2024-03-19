#include <stdio.h>
#include <string.h>

int main (void) {
    char deck[201];
    char sub_deck[201];
    int m, h;

    for (;;) {
        scanf ("%s", deck);
        if (strcmp (deck, "-")==0) break;
        scanf ("%d", &m);
        for (int i=0; i<m; i++) {
            scanf ("%d", &h);
            strcpy (sub_deck, deck+h);
            strncat (sub_deck, deck, h);
            strcpy (deck, sub_deck);
        }
        printf ("%s\n", deck);
    }
    
    return 0;
}
