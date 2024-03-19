#include<stdio.h>

#define MAX_LENGTH 32
#define SORT_LENGTH (3 - 1)

int main(void)
{
        char line[MAX_LENGTH];
        int i,j;
        int sort[3];
        int tmp;

        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d %d %d", &sort[0], &sort[1], &sort[2]);

        for (j = 0; j < SORT_LENGTH ; j ++) {
                for (i = SORT_LENGTH; i -1 >= j; i--) {
                        if( sort[i - 1] > sort[i] ) {
                                tmp = sort[i];
                                sort[i] = sort[i -1];
                                sort[i -1] = tmp;
                        } else {
                                // do nothing.
                        }
                }
        }

        for (i = 0; i <= SORT_LENGTH; i++) {
                if (i == SORT_LENGTH)
                        printf("%d\n", sort[i]);
                else
                        printf("%d ", sort[i]);
        }

        return 0;
}