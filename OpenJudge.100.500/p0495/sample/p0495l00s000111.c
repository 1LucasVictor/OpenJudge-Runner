#include <stdio.h>

int main() {
    char str[4];
    
    scanf("%s", str);
    
    if ((str[0] != str[1]) || (str[1] != str[2]))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}