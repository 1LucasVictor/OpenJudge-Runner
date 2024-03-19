#include <stdio.h>
# include <string.h>

int main() {
    int vid, att;
    scanf("%d %d", &vid, &att);
    
    if (vid%att ==0)
        printf("%d\n", (vid/att));
    else
        printf("%d\n", (vid/att)+1);
    return 0;
}
