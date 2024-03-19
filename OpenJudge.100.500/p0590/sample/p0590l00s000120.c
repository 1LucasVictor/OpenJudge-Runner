#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int8_t main(void) {
    uint8_t buffer[4], pos_values[5], max_distance;
    for (uint8_t i = 0; i < 5; i++) {
        if (fgets(buffer, 4, stdin) != NULL) {
            pos_values[i] = atoi(buffer);
        } else {
            fprintf(stderr, "[x] fgets() error.\n");
            return 1;
        }
    }
    if (fgets(buffer, 4, stdin) != NULL) {
        max_distance = atoi(buffer);
    } else {
        fprintf(stderr, "[x] fgets() error.\n");
        return 1;
    }
    uint8_t flag = 1;
    for (uint8_t i = 0; i < 5; i++) {
        for (uint8_t j = i+1; j < 5; j++) {
            if (pos_values[j]-pos_values[i] > max_distance) {
                flag = 0;
                break;
            }
        }
        if (!flag) {
            break;
        }
    }
    if (flag) {
        printf("Yay!\n");
    } else {
        printf(":(\n");
    }
}