#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int IsOk(int*);

int main() {
    int data[3];
    int temp;

    temp = scanf("%d %d %d", &data[0], &data[1], &data[2]);

    if (IsOk(data)==1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}

int IsOk(int* data) {
    int cnt5 = 2;
    int cnt7 = 1;
    int sz = sizeof(data);
    int i;
    for (i = 0;i < sz-1;i++)
    {
        if (data[i] == 5)
        {
            cnt5--;
            if (cnt5 < 0) {
                return 0;
            }
        }
        else if (data[i] == 7)
        {
            cnt7--;
            if (cnt7 < 0) {
                return 0;
            }
        }
    }
    if (cnt5 == 0 && cnt7 == 0) {
        return 1;
    }
}