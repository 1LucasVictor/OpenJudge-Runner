#include <stdio.h>
#include <string.h>

typedef struct
{
    char line[1002];
} line_st;

void print(char *str, char *args)
{
    int a, b;
    sscanf(args, "%d %d", &a, &b);
    for (char *elm = str + a, *const end = str + b + 1; elm != end; ++elm)
    {
        printf("%c", *elm);
    }
    printf("\n");
}

void reverse(char *str, char *args)
{
    int a, b;
    sscanf(args, "%d %d", &a, &b);
    for (char *from = str + a, *to = str + b; from < to; ++from, --to)
    {
        char c = *to;
        *to = *from;
        *from = c;
    }
}

void replace(char *str, char *args)
{
    int a, b;
    char p[1001] = {};
    sscanf(args, "%d %d %s", &a, &b, p);
    for (char *elm = str + a, *const end = str + b + 1, *src = p; elm != end; ++src, ++elm)
    {
        *elm = *src;
    }
}

int main(int argc, char *argv[])
{
    char str[1002] = {};
    if (fgets(str, 1002, stdin))
    {
        int q;
        scanf("%d", &q);
        getchar();
        line_st lines[100] = {};
        for (line_st *elm = lines, *const end = elm + q; elm != end; ++elm)
        {
            fgets(elm->line, 1002, stdin);
        }
        for (line_st *elm = lines, *const end = elm + q; elm != end; ++elm)
        {
            char *command = strtok(elm->line, " \n");
            void (*func)(char *, char *) = !strcmp(command, "print"  ) ? print :
                                           !strcmp(command, "reverse") ? reverse :
                                           !strcmp(command, "replace") ? replace : NULL;
            if (func)
            {
                func(str, elm->line + strlen(command) + 1);
            }
        }
    }
    return 0;
}

