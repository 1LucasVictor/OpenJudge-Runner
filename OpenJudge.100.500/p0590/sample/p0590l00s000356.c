#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buffer[4];
    int pos_values[5], max_distance;
    for (int i = 0; i < 5; i++) {
        if (fgets(buffer, 4, stdin) != NULL) {
            pos_values[i] = atoi(buffer);
        }
    }
    if (fgets(buffer, 4, stdin) != NULL) {
        max_distance = atoi(buffer);
    }
    if (pos_values[4] - pos_values[0] <= max_distance) {
        printf("Yay!");
    } else {
        printf(":(");
    }
    return 0;
}