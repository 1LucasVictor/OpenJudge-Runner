#include <stdio.h>

#define BUF_SIZE 100

int main(void) {
    char station[BUF_SIZE];

    scanf("%s", station);
    int flag_a = 0, flag_b = 0;
    for (int i = 0; i < 3; i++) {
        if (station[i] == 'A') {
            flag_a = 1;
        } else if (station[i] == 'B') {
            flag_b = 1;
        }
    }

    if (flag_a && flag_b) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}