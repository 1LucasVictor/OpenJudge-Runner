#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char szInputStr[210];
    int iShaffle;
    int iShaffleStrlen;
    int iCount, iCount2;
    char iSlideTmp;

    while (1) {
        scanf("%s", szInputStr);
        if (strcmp(szInputStr, "-") == 0) break;
        scanf("%d", &iShaffle);
        
        for (iCount = 0; iCount < iShaffle; iCount++) {
            scanf("%d", &iShaffleStrlen);
            while (iShaffleStrlen != 0) {
                iSlideTmp = szInputStr[0];
                for (iCount2 = 1; iCount2 < strlen(szInputStr); iCount2++) {
                    szInputStr[iCount2 - 1] = szInputStr[iCount2];
                }
                szInputStr[strlen(szInputStr) - 1] = iSlideTmp;
                iShaffleStrlen--;
            }
        }
        printf("%s\n", szInputStr);
    }

    return 0;
}
