#include <stdio.h>

int
main()
{
        int stack[16];
        int *head;
        char buf[4];

        head = stack;
        while (fgets(buf, 4, stdin)){
                sscanf(buf, "%d", head);
                if (*head == 0) {
                        printf("%d\n", *--head);
                } else
                        head++;
        }

        return 0;
}