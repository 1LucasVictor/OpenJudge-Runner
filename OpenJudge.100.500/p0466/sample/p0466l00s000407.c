#include <stdio.h>
#include <string.h>
#define N 20

int main()
{
    char s[N], t[N], test[N];
    scanf("%s %s", s, t);
    strncpy(test, t, strlen(s));
    test[strlen(s)]='\0';
    if (strlen(t) == strlen(s) + 1 && strcmp(test, s) == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}