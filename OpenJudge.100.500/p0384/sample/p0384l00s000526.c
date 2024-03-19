#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIMIT 1201

int main() {
    char ss[LIMIT];
    fgets(ss, LIMIT, stdin);

    char *ln = strchr(ss, '\n');
    if (ln != NULL) {
        *ln = '\0';
    }
    int len = strlen(ss);
    for (int i=0; i<len; ++i) {
        if (isalpha(ss[i])) {
            if (ss[i] >= (int)'A' && ss[i] <= (int)'Z') {
                ss[i] += (int)'a' - (int)'A';
            } else {
                ss[i] += (int)'A' - (int)'a';
            }
        }
    }
    printf("%s\n", ss);
    return 0;
}

