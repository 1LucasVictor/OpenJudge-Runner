#include <stdio.h>
#include <string.h>
#define BUFLEN 1000

void ord_print(char *str, int start, int end) {
    int i;

    for (i = start; i <= end; i++) {
        printf("%c", *(str + i));
    }
    printf("\n");
}

void ord_reverse(char *str, int start, int end) {
    int i;
    char tmp[BUFLEN];

    for (i = 0; i < end - start + 1; i++) tmp[i] = *(str + end - i);
    for (i = 0; i < end - start + 1; i++) *(str + start + i) = tmp[i];

}

void ord_replace(char *str, int start, int end, char *p) {
    int i;

    for (i = 0; i < end - start + 1; i++) *(str + start + i) = *(p + i);
}

int main(void) {
    int q, i, start, end;
    char str[BUFLEN], ord[BUFLEN], p[BUFLEN];

    scanf("%s", str);
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%s", ord);
        if (strcmp(ord, "print") == 0) {
            scanf("%d %d", &start, &end);
            ord_print(str, start, end);
        } else if (strcmp(ord, "reverse") == 0) {
            scanf("%d %d", &start, &end);
            ord_reverse(str, start, end);
        } else if (strcmp(ord, "replace") == 0) {
            scanf("%d %d %s", &start, &end, p);
            ord_replace(str, start, end, p);
        }
    }

    return 0;
}