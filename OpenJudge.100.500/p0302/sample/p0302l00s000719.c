#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) 
{
    int i, j, index = 0, n;
    char tmp[12], *str = tmp, **strs;

    scanf("%d", &n);
    strs = malloc(sizeof(char*) * n);
    for(i = 0; i < n; i++) {
        scanf("%s", str);
        if(strcmp(str, "insert") == 0) {
            scanf("%s", str);
            strs[index] = malloc(sizeof(char) * 12);
            strcpy(strs[index++], str);
        } else if(strcmp(str, "find") == 0) {
            scanf("%s", str);
            for(j = 0; j < index; j++) {
                if(strcmp(str, strs[j]) == 0) {
                    printf("yes\n");
                    break;
                }
            }
            if(j == index)
                printf("no\n");
        }
    }

    return 0;
}