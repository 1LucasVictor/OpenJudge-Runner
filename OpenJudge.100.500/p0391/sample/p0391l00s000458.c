#include <stdio.h>
#include <string.h>

int main (void) {
    char str[1001];
    int q;
    char command[8];
    int op1, op2;
    char op3[1001];
    char sub_str[1001];

    scanf ("%s", str);
    scanf ("%d", &q);

    for (int i=0; i<q; i++) {
        scanf ("%s", command);
        if (strcmp(command, "print")==0) {
            scanf ("%d %d", &op1, &op2);
            for (int j=op1; j<=op2; j++) printf ("%c", str[j]);
            printf ("\n");
        } else if (strcmp(command, "reverse")==0) {
            scanf ("%d %d", &op1, &op2);
            strncpy (sub_str, str+op1, op2-op1+1);
            for (int j=op1; j<=op2; j++) str[j] = sub_str[op2-j];
        } else if (strcmp(command, "replace")==0) {
            scanf ("%d %d %s", &op1, &op2, op3);
            strncpy (str+op1, op3, op2-op1+1);
        }
    }

    return 0;
}
