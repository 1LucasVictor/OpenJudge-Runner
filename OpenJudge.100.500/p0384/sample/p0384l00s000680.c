#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(void) {
    char mimori_suzuko[2048], *fukuenn_misato;
    if (fgets(mimori_suzuko, sizeof(mimori_suzuko), stdin) == NULL) return 1;
    if ((fukuenn_misato = strchr(mimori_suzuko, '\n')) != NULL) *fukuenn_misato = '\0';
    for (fukuenn_misato = mimori_suzuko; *fukuenn_misato != '\0'; fukuenn_misato++) {
        int katou_emiri = (unsigned char)*fukuenn_misato;
        if (islower(katou_emiri)) putchar(toupper(katou_emiri));
        else if (isupper(katou_emiri)) putchar(tolower(katou_emiri));
        else putchar(katou_emiri);
    }
    putchar('\n');
    return 0;
}
