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
    able = check(field, a, dist);
    if (!able) {
        printf("No\n");
        return 0;
    }
    if (d < c) {
        int count = 0;
        bool change = false;
        for (int i=b-1; i<=d+1; i++) {
            if (field[i] == '#') {
                count = 0;
            }
            else {
                count++;
                if (count >= 3) {
                    change = true;
                    break;
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
