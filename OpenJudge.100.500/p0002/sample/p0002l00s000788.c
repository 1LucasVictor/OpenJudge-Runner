#include<stdio.h>

void
swp(int *a, int *b)
{
        int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp;
}

int
main(int argc, char *argv[])
{
        int a, b, c;
        int i;
        char res[1000] = {0};
        char *itr;

        scanf("%d", &i);
        itr = res;
        for (; i > 0; i--) {
                scanf("%d %d %d", &a, &b, &c);
                if (a > b) swp(&a, &b);
                if (b > c) swp(&b, &c);
                if (a * a + b * b == c * c) *itr = 1;
                itr++;
        }
        *itr = 2;
        itr = res;
        while (*itr != 2)
                printf("%s\n", (*itr++ == 1)? "YES" : "NO");
        return 0;
}