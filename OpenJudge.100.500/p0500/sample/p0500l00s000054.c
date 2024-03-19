#include <stdio.h>
#include <string.h>

int main(void) {
    int digits, count;
    scanf("%d %d", &digits, &count);

    int nums[digits];
    for (int i = 0; i < digits; i++) {
        nums[i] = -1;
    }
    for (int i = 0; i < count; i++) {
        int digit, num;
        scanf(" %d %d", &digit, &num);
        if (nums[digit - 1] < 0) {
            nums[digit - 1] = num;
        } else {
            if (nums[digit - 1] != num) {
                printf("-1\n");
                return 0;
            }
        }
    }

    int result = 0, times = 1, flag = 1;
    for (int j = 0; j < digits - 1; j++) {
        times *= 10;
    }
    for (int i = 0; i < count; i++) {
        if (nums[i] > 0) {
            result += nums[i] * times;
            flag = 0;
        } else if (flag) {
            flag = 1;
        }
        times /= 10;
    }
    if (!flag) {
        printf("%d\n", result);
    } else if (digits == 1 && flag) {
        printf("0\n");
    } else {
        printf("-1\n");
    }
    return 0;
}