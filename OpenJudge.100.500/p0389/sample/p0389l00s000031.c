#include<stdio.h>
#include<string.h>

int
main(int argc, char *argv[])
{
        char buf[20000];
        char *s, *e;
        int i, h;

        while (scanf("%s", buf), buf[0] != '-') {
                s = buf;
                e = s + strlen(buf) - 1;
                for (scanf("%d", &i); i > 0; i--) {
                        for (scanf("%d", &h); h > 0; h--) {
                                *++e = *s++;
                        }
                }
                *++e = '\0';
                printf("%s\n", s);
        }
        return 0;
}