#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    
    while (1) {
        char num[1000];
        scanf("%s", num);
        int sum = 0;
        int len = strlen(num);

        if (num[0] == '0') {
            break;
        } else {
            for (int i = 0; i < len; i++){
                sum += num[i] - '0';
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}
