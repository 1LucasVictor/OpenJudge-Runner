#include <stdio.h>
#include <string.h>

int main() {
    char str1[11], str2[11];
    int c = 1;
    scanf("%s %s", str1, str2);

    for (int i = 0; i < (strlen(str1)); ++i)
        if (str1[i] != str2[i])
            c = 0;
    
    if (c == 1)
        printf("%s\n", "Yes");
    else
        printf("%s\n", "No");

    return 0;
}