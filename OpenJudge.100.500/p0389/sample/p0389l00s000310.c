#include <stdio.h>
#include <string.h>

#define MAX 200

int main(void)
{
    int i, j;

    char in[MAX], out[MAX];
    while (1) {
        scanf("%s", in);
        int in_len = (int)strlen(in);

        if (strcmp(in, "-") == 0) {
            break;
        } else {
            int shuffle_num;
            scanf("%d", &shuffle_num);

            for (i = 1; i <= shuffle_num; i++) {
                int cards_num;
                scanf("%d", &cards_num);

                for (j = 0; j < in_len - cards_num; j++) {
                    out[j] = in[cards_num + j];
                }
                for (j = in_len - cards_num; j < in_len ; j++) {
                    out[j] = in[j - in_len + cards_num];
                }

                for (j = 0; j < in_len; j++) {
                    in[j] = out[j];
                }
            }
            out[in_len] = '\0';

            printf("%s\n", out);
        }
    }

    return 0;
}