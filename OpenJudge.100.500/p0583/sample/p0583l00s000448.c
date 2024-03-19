#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool check(char *field, int start, int end) {
    bool able = true;
    bool flag = false;
    for (int i=start; i<=end; i++) {
        if (field[i] == '#') {
            if (flag) {
                able = false;
                break;
            }
            else {
                flag = true;
            }
        }
        else {
            flag = false;
        }
    }
    return able;
}

int main() {
    int n = 0, a = 0, b = 0, c = 0, d = 0;
    scanf("%d %d %d %d %d\n", &n, &a, &b, &c, &d);
    a--;
    b--;
    c--;
    d--;
    char *field = (char *)malloc(sizeof(char)*n);
    for (int i=0; i<n; i++) {
        field[i] = getchar();
    }
    bool able = true;
    bool flag = false;
    int dist = (c > d) ? c : d;
    for (int i=a+1; i<dist; i++) {
        if (field[i] == '#') {
            if (flag) {
                able = false;
                break;
            }
            else {
                flag = true;
            }
        }
        else {
            flag = false;
        }
    }
    if (!able) {
        printf("No\n");
        return 0;
    }
    if (d < c) {
        int count = 0;
        bool change = false;
        for (int i=0; i<n; i++) {
            if (field[i] == '#') {
                count = 0;
            }
            else {
                count++;
                if (count >= 3) {
                    if (i < a) {
                        if (check(field, i, a)) {
                            change = true;
                            break;
                        }
                    }
                    else if (i > dist) {
                        if (check(field, dist, i)) {
                            change = true;
                            break;
                        }
                    }
                    else {
                        change = true;
                        break;
                    }
                }
            }
        }
        if (!change) able = false;
    }
    if (able) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    free(field);
    return 0;
}
