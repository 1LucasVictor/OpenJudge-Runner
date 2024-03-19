#include <stdio.h>
#include <stdlib.h>

int main() {
    int k;
    int A[5];
    int f,l = 4;
    int flag = 0;

    for (int i = 0; i < 5; ++i) {
        scanf("%d",&A[i]);
    }
    scanf("%d",&k);

    while (l > 1) {
        if (A[l] - A[0] > k) {
            flag = 1;
            break;
        }
        else {
            l -= 1;
        }
    }

    if (flag == 0) {
        printf("Yay!\n");
    }
    else {
        printf(":(\n");
    }
    return 0;
}
  