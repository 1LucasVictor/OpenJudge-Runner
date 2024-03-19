#include <stdio.h>

int main(void){
    int n = 0;
    char s[3];
    scanf("%s", s);
    for (int i = 0; i < 3; i++){
        if (s[i] == '1'){
            n += 1;
        }
    }
    printf("%i\n", n);
    return 0;
}