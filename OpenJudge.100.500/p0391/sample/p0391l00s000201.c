#include <stdio.h>
#include <string.h>

int main() {
    char str[1001], name[10], temp, p[1000];
    int q, a, b;
    scanf("%s", str);
    scanf("%d", &q);
    for (int i=0; i<q; i++) {
        scanf("%s", name);
        if ((strcmp(name, "print")) == 0) {
            scanf("%d %d", &a, &b);
            for (int j=a; j<=b; j++) {
                printf("%c", str[j]);
            }
            putchar('\n');
        } else if ((strcmp(name, "reverse")) == 0) {
            scanf("%d %d", &a, &b);
            for (int k=a, l=0; a+l<b-l; k++, l++) {
                temp = str[k];
                str[k] = str[b-l];
                str[b-l] = temp;
            }
        } else if ((strcmp(name, "replace")) == 0) {
            scanf("%d %d %s", &a, &b, p);
            for (int m=a, n=0; m<=b; m++, n++) {
                str[m] = p[n];
            }
        }
    }
    return 0;
}

