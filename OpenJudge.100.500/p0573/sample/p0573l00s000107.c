#include <stdio.h>
 
int main (void) {
    char s[10];
    scanf("%s", s);

    int cnt = 0;

    for ( int i = 0; i < 4; i++ ) {
        for ( int j = i + 1; j < 4; j++ ) {
            if ( s[i] == s[j] ) cnt++;
        }
    }

    if ( cnt == 2 ) printf("Yes");
    else {
        printf("No");
    }
    
    return 0;
}