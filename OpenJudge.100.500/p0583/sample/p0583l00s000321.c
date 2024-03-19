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
    int blocka, blockb;
    int map[400000];
    int i, j, k;
    static char str[400000];

    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    scanf("%s", str);
    int maxx = max(c, d);
    for (i = 0; i < n - 1; i++) {
        if (str[i] == '#' && str[i + 1] == '#') {
            printf("No\n");
            return 0;
        }
    }

    int flg = 0;
    int ia = a - 1;
    int ib = b - 1;
    int x;
    x = a - 1;
    int cnt = 0;
    int cnt_flg = 1;

    for (i = b; i < d; i++) {
        if (str[i - 1] == '.' && str[i] == '.' && str[i + 1] == '.') {
            cnt_flg = 0;
        }
    }

    if (!cnt_flg) {
        printf("Yes\n");
    } else {
        if (c < d) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
