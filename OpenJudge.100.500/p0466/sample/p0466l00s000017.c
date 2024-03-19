#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10];
    int c = 0;
    scanf("%s %s", str1, str2);

    for (int i = 0; i <= 10; ++i) {
        if (str1[i] == str2[i])
            c = 1;
        else
            c = 0;
    }
    
    if (str1[strlen(str1)] == str2[strlen(str2)])
        c = 1;
    
    if (c == 1)
        printf("%s\n", "Yes");
    else
        printf("%s\n", "No");

    return 0;
}