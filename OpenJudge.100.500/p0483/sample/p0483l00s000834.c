#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[3];
    scanf("%s", a);

    for (int i = 0; i< sizeof(a); i ++) {
        if( a[i] == '7' ) {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}