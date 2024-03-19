#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[1001] = {0};
    int q;
    
    fgets(str, sizeof(str), stdin);
    if ( str[strlen(str) - 1] == '\n' ) {
        str[strlen(str) - 1] = '\0';
    }
    scanf("%d\n", &q);
    
    for ( int i = 0; i < q; i++ ) {
        char instr[1001] = {0};
        char ope[1001] = {0};
        int a;
        int b;
        char *tp;
        fgets(instr, sizeof(instr), stdin);
        if ( instr[strlen(instr) - 1] == '\n' ) {
            instr[strlen(instr) - 1] = '\0';
        }
        tp = strtok(instr, " ");
        memcpy(ope, tp, sizeof(ope));
        tp = strtok(NULL, " ");
        a = atoi(tp);
        tp = strtok(NULL, " ");
        b = atoi(tp);
        if ( strcmp(ope, "print") == 0 ) {
            for ( int i = a; i <= b; i++ ) {
                printf("%c", str[i]);
            }
            printf("\n");
        } else if ( strcmp(ope, "reverse") == 0 ) {
            char buf[1001] = {0};
            int j;
            memcpy(buf, &str[a], sizeof(char) * (b - a + 1));
            j = strlen(buf) - 1;
            for ( int i = a; i <= b; i++ ) {
                str[i] = buf[j];
                j--;
            }
        } else if ( strcmp(ope, "replace") == 0 ) {
            int j = 0;
            tp = strtok(NULL, " ");
            for ( int i = a; i <= b; i++ ) {
                str[i] = tp[j];
                j++;
            }
        }
    }

    return 0;
}
