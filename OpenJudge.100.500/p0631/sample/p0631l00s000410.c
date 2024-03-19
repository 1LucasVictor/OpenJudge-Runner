#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0, total = 0;
    
    scanf("%d %d %d", &a, &b, &total);

    if ((total-a) <= b && ((total - a) >= 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
