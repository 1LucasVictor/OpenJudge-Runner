#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef TEST
struct test {
    int ans;
} td[] = {
    {},
};
#endif

void
solver(char *s)
{
    int i;
    for(i = 1; i < strlen(s); i++) {
        if(s[i - 1] != s[i]) {
            printf("Yes\n");
            return;
        }
    }
    printf("No\n");
}

int
main(int argc, char *argv[])
{
#ifdef TEST
    int tt;
    for(tt = 0; tt < sizeof(td) / sizeof(struct test); tt++) {
        solver();
        printf("%d\n", td[tt].ans);
    }
#endif
    char S[4];
    scanf("%s", S);
    solver(S);
    return 0;
}