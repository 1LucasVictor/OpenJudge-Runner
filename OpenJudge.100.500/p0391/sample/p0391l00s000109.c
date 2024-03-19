#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char str[1001];
    int q;
    scanf("%s", str);
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        char order[8];
        int a, b;
        scanf("%s", order);
        scanf("%d %d", &a, &b);


        if (strcmp(order, "print") == 0) {
            for (int j = a; j <= b; j++) {
                printf("%c", str[j]);
            }
            printf("\n");

        } else if (strcmp(order, "reverse") == 0) {
            char temp[1001];
            for (int j = a; j <= b; j++) {
                temp[j] = str[a+b-j];
            }

            for (int j = a; j <= b; j++) {
                str[j] = temp[j];
            }
        } else {
            int p_len = b - a + 1;
            char p[p_len];
            scanf("%s", p);

            for (int j = 0; j < p_len; j++) {
                str[a+j] = p[j];
            }
        }
    }

    return 0;
}
