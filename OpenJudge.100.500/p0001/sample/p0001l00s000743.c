#include <stdio.h>
#include <string.h>

int main(void)
{
        char tmp[100];
        int a, b;

        for (;;) {
                if (scanf("%d%d", &a, &b) == EOF)
                        return 0;
                sprintf(tmp, "%d", a + b);
                printf("%d\n", strlen(tmp));
        }
}