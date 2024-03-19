#include <stdio.h>
#include <string.h>

#define MAX_STR 1000

void print(char *str, int first, int last);
void reverse(char *str, int first, int last);
void replace(char *str, int first, int last, char *new_str);

int main(void)
{
    int i;

    char str[MAX_STR + 1];
    scanf("%s", str);

    int num_op;
    scanf("%d", &num_op);

    char op[8];
    int first, last;
    for (i = 1; i <= num_op; i++) {
        scanf("%s %d %d", op, &first, &last);

        if (strcmp(op, "print") == 0) {
            print(str, first, last);
        } else if (strcmp(op, "reverse") == 0) {
            reverse(str, first, last);
        } else {
            char new_str[1001];
            scanf("%s", new_str);
            replace(str, first, last, new_str);
        }
    }

    return 0;
}

void print(char *str, int first, int last)
{
    int i;
    for (i = first; i <= last; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void reverse(char *str, int first, int last)
{
    char tmp[MAX_STR];
    int i;
    for (i = first; i <= last; i++) {
        tmp[i] = str[last + first - i];
    }
    for (i = first; i <= last; i++) {
        str[i] = tmp[i];
    }
}

void replace(char *str, int first, int last, char *new_str)
{
    int i;
    for (i = 0; i < last - first + 1; i++) {
        str[first + i] = new_str[i];
    }
}