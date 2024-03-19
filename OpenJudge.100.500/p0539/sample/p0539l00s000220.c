/*  ex3_4
    Graku   */
#include <stdio.h>
#include <math.h>

int main(void) {
    int num; //declaration
    scanf("%d", &num);

    int flag = 0; //if exist i, j in {x in N | 1 <= x <= 9} s.t. n == i * j, flag == 1, else flag == 0
    for (int i = 1; i <= 9; ++i) { //1 <= i <= 9
        if (flag) { //if already find (i, j) s.t. (i, j) s.t. n == i * j, break
            break;
        }
        for (int j = i; j <= 9; ++j) { //i <= j <= 9, dont have to check (i, j) s.t. i > j
            if (num == i * j) { //if find (i, j) s.t. n == i * j, flag = 1
                flag = 1;
                break;
            }
        }
    }

    if (flag) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}
