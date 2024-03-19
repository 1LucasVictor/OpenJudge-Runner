#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a<30) {
        printf("%s\n","No");
    }
    else
        printf("%s\n", "Yes");
    return 0;
}