#include<stdio.h>

int
output(char *str)
{
        if (*str != '\0')
                output(str + 1);
        else
                return 1;
        printf("%c", *str);
        return 1;
}

int
main(int argc, char *argv[])
{
        char buf[21];

        scanf("%s", buf);
        output(buf);
        fputc('\n', stdout);
        return 0;
}