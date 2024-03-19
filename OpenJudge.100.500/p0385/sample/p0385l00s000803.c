#include <stdio.h>

int main(){
    char x[1101];
    int j;
    int num, sum = 0;
    
    while (1) {
        scanf("%s", x);
        if (x[0] == '0') break;
        for (j = 0;x[j] != '\0'; j++) {
            num = x[j] - '0';
            sum = sum + num;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    
    return 0;
}