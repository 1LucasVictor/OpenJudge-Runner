#include <math.h>
#include <stdio.h>
#include <string.h>
void swap_int(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap_char(char* x, char* y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void asc_sort(int* array, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                swap_int(&array[i], &array[j]);
            }
        }
    }
}

void dec_sort(int* array, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (array[i] < array[j]) {
                swap_int(&array[i], &array[j]);
            }
        }
    }
}

int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int min(int x, int y) {
    if (x > y) {
        return y;
    } else {
        return x;
    }
}

int main(void) {
    int n, a, b, c, d;
    static char str[400000];
    int flg = 0;
    int flg1 = 0;
    int i, j, k, x, cnt = 0;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    scanf("%s", str);

    for (i = a - 1; i < max(c, d) - 2; i++) {
        if (str[i] == '#' && str[i + 1] == '#') {
            flg = 1;
            break;
        }
    }
    if (flg) {
        printf("No\n");
        return 0;
    }

    if (c < d) {
        if (!flg) {
            printf("Yes\n");
        }
    } else {
        x = b - 1;
        while (1) {
            cnt = 0;
            for (i = x; i <= d - 1 && str[i] != '#'; i++) {
                cnt++;
            }
            if (cnt >= 3) {
                flg1 = 1;
                break;
            }
            if (i == d) {
                break;
            }
            x = i + 1;
        }
        if (flg1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
