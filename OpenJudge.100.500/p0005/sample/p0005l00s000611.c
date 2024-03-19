#include <stdio.h>
int main(void){
        char str[256];
        int i;
        scanf("%s", str);
        for(i = 0; str[i] != '\0'; i++);
        for(i -= 1; i >= 0; i--){
                printf("%c", str[i]);
        }
        printf("\n");
        return 0;
}