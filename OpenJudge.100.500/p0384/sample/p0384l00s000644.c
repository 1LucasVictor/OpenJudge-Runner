#include <stdio.h>
#include <string.h>

int main(void)
{
    
    char str[1201] = {0};
    
    fgets(str, sizeof(str), stdin);
  
    for ( int i = 0; i < strlen(str); i++ ) {
        if ( (0x41 <= str[i]) && (str[i] <= 0x5A) ) {
            printf("%c", str[i] + 0x20);
        } else if ( (0x61 <= str[i]) && (str[i] <= 0x7A) ) {
            printf("%c", str[i] - 0x20);
        } else {
            printf("%c", str[i]);
        }
    }

    return 0;
}
