#include <stdio.h>
#include <stdlib.h>

void
solver(int n)
{
    int i, j;

    if (n>81) {
        printf("No\n");
        return;
    }
    for(i=9; i>0; i--) {
        if (n%i==0) {
            j = n / i;
            if (j<10) {
                printf("Yes\n");
                return;
            }
        }
    }
    printf("No\n");
}

int
main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    solver(n);
    return 0;
}